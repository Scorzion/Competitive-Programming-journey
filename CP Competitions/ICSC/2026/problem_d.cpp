#include <iostream>
#include <vector>
#include <tuple>
#include <algorithm>
#include <stdexcept>
#include <sstream>

/**
 * Replays every event in frame order, applying all damage on the same frame
 * before checking for a KO condition, then returns the final HP of each player.
 * 
 * Args:
 *     events: A list of tuples (player, frame, attack_value)
 *             where player is 1 or 2, frame is a non-negative integer,
 *             and attack_value is a positive integer.
 *     H: starting HP for both players (a positive integer).
 *     
 * Returns:
 *     A vector of two integers [hp1, hp2], each clamped to a minimum of 0.
 */
std::vector<int> processGame(std::vector<std::tuple<int, int, int>> events, int H) {
    int hp1 = H;
    int hp2 = H;
    
    // Sort events by frame number to handle network jitter (stable sort is fine, 
    // but regular sort on frame is sufficient since all events within the same frame
    // are processed simultaneously).
    std::sort(events.begin(), events.end(), [](const std::tuple<int, int, int>& a, const std::tuple<int, int, int>& b) {
        return std::get<1>(a) < std::get<1>(b);
    });
    
    size_t i = 0;
    size_t n = events.size();
    
    while (i < n) {
        // If a game-ending condition (one or both players KO'd) was met in a previous frame,
        // we terminate the simulation immediately.
        if (hp1 <= 0 || hp2 <= 0) {
            break;
        }
        
        int current_frame = std::get<1>(events[i]);
        
        int damage_to_1 = 0;
        int damage_to_2 = 0;
        
        // Accumulate all attacks occurring on the exact same frame
        while (i < n && std::get<1>(events[i]) == current_frame) {
            int attacker = std::get<0>(events[i]);
            int damage = std::get<2>(events[i]);
            
            if (attacker == 1) {
                damage_to_2 += damage;
            } else if (attacker == 2) {
                damage_to_1 += damage;
            } else {
                throw std::invalid_argument("Player number must be either 1 or 2.");
            }
            i++;
        }
        
        // Apply the cumulative damage for this frame simultaneously
        hp1 -= damage_to_1;
        hp2 -= damage_to_2;
    }
    
    // Clamp the final HP values to a minimum of 0
    return {std::max(0, hp1), std::max(0, hp2)};
}

// --- Main execution block ---
int main() {
    try {
        std::string hp_line;
        if (!std::getline(std::cin, hp_line)) return 0;
        int H = std::stoi(hp_line);
        
        std::vector<std::tuple<int, int, int>> events;
        std::string line;
        while (std::getline(std::cin, line)) {
            // Trim whitespace
            line.erase(0, line.find_first_not_of(" \t\r\n"));
            if (line.empty()) continue;
            
            std::stringstream ss(line);
            int player, frame, attack;
            if (ss >> player >> frame >> attack) {
                events.push_back(std::make_tuple(player, frame, attack));
            }
        }
        
        std::vector<int> final_hp = processGame(events, H);
        
        std::cout << final_hp[0] << " " << final_hp[1] << std::endl;
        
    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
        return 1;
    }
    return 0;
}
