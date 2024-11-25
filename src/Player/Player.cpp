#include "Player.h"
#include "Item.h"
#include "Item.h"

Player::Player(const std::string& className, double armor, Tile* startTile, Vector2 startPosition)
    : className(className), armor(armor), currentTile(startTile), position(startPosition) {}

double Player::getArmor() const {
    return armor;
}

std::string Player::getClassName() const {
    return className;
}

Vector2 Player::getPosition() const {
    return position;
}

bool Player::equip(Item* item) {
    if (item->getItemType() == ITEM_TYPE::ARMOR) {  
        armor += item->getBaseEffectStrength();   
        return true;
    }
    return false; 
}

// DeEquip: Ta bort ett föremål och minska spelarens stats
bool Player::deEquip(Item* item) {
    if (item->getItemType() == ITEM_TYPE::ARMOR) {
        armor -= item->getBaseEffectStrength();   
        return true;
    }
    return false;  
}

Tile* Player::move(DIRECTION direction, WorldMap& worldMap) {
    // Uppdatera positionen baserat på riktningen
    switch (direction) {
        case DIRECTION::NORTH: position.y -= 1; break;
        case DIRECTION::SOUTH: position.y += 1; break;
        case DIRECTION::EAST:  position.x += 1; break;
        case DIRECTION::WEST:  position.x -= 1; break;
    }

    // Uppdatera nuvarande tile baserat på den nya positionen
    currentTile = worldMap.getTile(position.x, position.y);

    return currentTile;
}
