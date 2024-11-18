#include <iostream>
#include "Player.h"
#include "Tile.h"
#include "WorldMap.h"
#include "Item.h"
#include "DIRECTION.h"



int main() {
    WorldMap worldMap;            
    Tile startTile;               
    Vector2 startPosition = {0, 0}; 

    Player player("Warrior", 50.0, &startTile, startPosition);

    std::cout << "Class: " << player.getClassName() << "\n";
    std::cout << "Armor: " << player.getArmor() << "\n";

    player.move(DIRECTION::NORTH, worldMap);
    Vector2 newPosition = player.getPosition();
    std::cout << "New Position: (" << newPosition.x << ", " << newPosition.y << ")\n";

    Item armorItem(ITEM_TYPE::ARMOR, 25.0);  

    if (player.equip(&armorItem)) {
        std::cout << "Equipped armor. New armor value: " << player.getArmor() << "\n";
    }

    if (player.deEquip(&armorItem)) {
        std::cout << "Dequipped armor. New armor value: " << player.getArmor() << "\n";
    }

    return 0;
}
