#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <stdexcept>

/**
 * Generates specific geometric patterns on an N x N grid.
 * 
 * Args:
 *     n: The grid size (5 <= N <= 51, always odd for diamond shape).
 *     shape: Either "checkerboard" or "diamond".
 *     
 * Returns:
 *     A 2D vector of integers (0 or 1) representing the grid.
 */
std::vector<std::vector<int>> generate_shape(int n, std::string shape) {
    std::vector<std::vector<int>> grid(n, std::vector<int>(n, 0));
    
    if (shape == "checkerboard") {
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                // Alternating cells, starting with 0 at top-left (0,0)
                grid[i][j] = (i + j) % 2;
            }
        }
    } else if (shape == "diamond") {
        if (n % 2 == 0) {
            throw std::invalid_argument("Grid size N must be odd for the diamond shape.");
        }
        int center = n / 2;
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                // Check Manhattan distance from the center cell (center, center)
                if (std::abs(i - center) + std::abs(j - center) <= center) {
                    grid[i][j] = 1;
                } else {
                    grid[i][j] = 0;
                }
            }
        }
    } else {
        throw std::invalid_argument("Unknown shape. Only 'checkerboard' and 'diamond' are supported.");
    }
    
    return grid;
}

// --- Main execution block ---
int main() {
    try {
        std::string n_str, shape;
        if (!std::getline(std::cin, n_str)) return 0;
        if (!std::getline(std::cin, shape)) return 0;
        
        int n = std::stoi(n_str);
        
        std::vector<std::vector<int>> grid = generate_shape(n, shape);
        
        // Print the grid as N rows, each containing N space-separated values
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                std::cout << grid[i][j] << (j == n - 1 ? "" : " ");
            }
            std::cout << "\n";
        }
    } catch (const std::invalid_argument& e) {
        std::cerr << "Input Error or Validation Failed: " << e.what() << std::endl;
        return 1;
    } catch (const std::exception& e) {
        std::cerr << "An unexpected error occurred: " << e.what() << std::endl;
        return 1;
    }
    
    return 0;
}
