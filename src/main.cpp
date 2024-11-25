#include <iostream>
#include <vector>

void printMap(int width, int height, int playerX, int playerY)
{
    // Print tiles as: '□'
    std::vector<std::vector<char>> map(height, std::vector<char>(width, '□'));

    // Print the player as: 'O'
    map[playerY][playerX] = 'O';

    // Print the map
    for (const auto &row : map)
    {
        for (char tile : row)
        {
            std::cout << tile << ' ';
        }
        std::cout << '\n';
    }
}

int main()
{
    int mapWidth = 7;  // Map width
    int mapHeight = 5; // Map height
    int playerX = 3;   // Player X-coordinate
    int playerY = 2;   // Player Y-coordinate

    // Allow customization
    std::cout << "Enter map width: ";
    std::cin >> mapWidth;
    std::cout << "Enter map height: ";
    std::cin >> mapHeight;
    std::cout << "Enter player X position (0-" << mapWidth - 1 << "): ";
    std::cin >> playerX;
    std::cout << "Enter player Y position (0-" << mapHeight - 1 << "): ";
    std::cin >> playerY;

    // Print the map
    printMap(mapWidth, mapHeight, playerX, playerY);

    return 0;
}