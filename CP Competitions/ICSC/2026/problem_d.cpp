#include <iostream>
#include <vector>
#include <tuple>
#include <algorithm>
#include <stdexcept>
#include <sstream>

// Processes game events, resolves frame-simultaneous damage, and returns final HP
std::vector<int> processGame(std::vector<std::tuple<int, int, int>> events, int H) {
    int hp1 = H;
    int hp2 = H;
    
    // Sort events by frame
    std::sort(events.begin(), events.end(), [](const std::tuple<int, int, int>& a, const std::tuple<int, int, int>& b) {
        return std::get<1>(a) < std::get<1>(b);
    });
    
    size_t i = 0;
    size_t n = events.size();
    
    while (i < n) {
        // Check KO
        if (hp1 <= 0 || hp2 <= 0) {
            break;
        }
        
        int current_frame = std::get<1>(events[i]);
        
        int damage_to_1 = 0;
        int damage_to_2 = 0;
        
        // Sum damage on same frame
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
        
        hp1 -= damage_to_1;
        hp2 -= damage_to_2;
    }
    
    return {std::max(0, hp1), std::max(0, hp2)};
}

// Main
int main() {
    try {
        std::string hp_line;
        if (!std::getline(std::cin, hp_line)) return 0;
        int H = std::stoi(hp_line);
        
        std::vector<std::tuple<int, int, int>> events;
        std::string line;
        while (std::getline(std::cin, line)) {
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
