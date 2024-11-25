#include <iostream>
#include <vector>

void printGrid(int width, int height, int playerX, int playerY)
{
    // Grid '□'
    std::vector<std::vector<char>> grid(height, std::vector<char>(width, '□'));

    // Player 'O'
    grid[playerY][playerX] = 'O';

    // Grid
    for (int y = 0; y < height; y++)
    {
        for (int x = 0; x < width; x++)
        {
            std::cout << grid[y][x] << ' ';
        }
        std::cout << std::endl;
    }
}

int main()
{
    int width = 7;   // Grid width
    int height = 5;  // Grid height
    int playerX = 3; // Player X position
    int playerY = 2; // Player Y position

    std::cout << "Initial Grid:" << std::endl;
    printGrid(width, height, playerX, playerY);

    return 0;
}
