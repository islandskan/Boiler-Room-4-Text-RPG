// #include <iostream>
// #include "Player.h"
// #include "Tile.h"
// #include "WorldMap.h"
// #include "Item.h"
// #include "DIRECTION.h"



// int main() {
//     WorldMap worldMap;            
//     Tile startTile;               
//     Vector2 startPosition = {0, 0}; 

//     Player player("Warrior", 50.0, &startTile, startPosition);

//     std::cout << "Class: " << player.getClassName() << "\n";
//     std::cout << "Armor: " << player.getArmor() << "\n";

//     player.move(DIRECTION::NORTH, worldMap);
//     Vector2 newPosition = player.getPosition();
//     std::cout << "New Position: (" << newPosition.x << ", " << newPosition.y << ")\n";

//     Item armorItem(ITEM_TYPE::ARMOR, 25.0);  

//     if (player.equip(&armorItem)) {
//         std::cout << "Equipped armor. New armor value: " << player.getArmor() << "\n";
//     }

//     if (player.deEquip(&armorItem)) {
//         std::cout << "Dequipped armor. New armor value: " << player.getArmor() << "\n";
//     }

//     return 0;
// }
#include "Enemy.h"
#include <iostream>
#include <ctime>
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

int main() {
    // Seed
    srand(static_cast<unsigned int>(time(0)));

    // Skapar fiende
    Enemy enemy1("enemy1", 50, 15);

    // Liv
    int playerHealth = 100;

    // Info
    enemy1.displayStatus();

    // Enemy attackerar spelare
    enemy1.attackPlayer(playerHealth);
    std::cout << "Player's health: " << playerHealth << "\n";

    // Spelare attackerar
    enemy1.takeDamage(20);

    // Från fiende till vän
    enemy1.setHostility(false);

    // Info
    enemy1.displayStatus();
  
    int width = 7;   // Grid width
    int height = 5;  // Grid height
    int playerX = 3; // Player X position
    int playerY = 2; // Player Y position

    std::cout << "Initial Grid:" << std::endl;
    printGrid(width, height, playerX, playerY);

    return 0;
}