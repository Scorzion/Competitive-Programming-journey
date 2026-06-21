#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <stdexcept>

std::vector<std::vector<int>> generate_shape(int n, std::string shape) {
    std::vector<std::vector<int>> grid(n, std::vector<int>(n, 0));

    if (shape == "checkerboard") {
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {

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

int main() {
    try {
        std::string n_str, shape;
        if (!std::getline(std::cin, n_str)) return 0;
        if (!std::getline(std::cin, shape)) return 0;

        int n = std::stoi(n_str);

        std::vector<std::vector<int>> grid = generate_shape(n, shape);

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
