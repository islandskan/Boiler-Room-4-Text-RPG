#ifndef PLAYER_H
#define PLAYER_H

#include <string>
#include "Tile.h"    
#include "WorldMap.h"  
#include "Vector2.h"  
#include "Item.h"  
#include "DIRECTION.h"


class Player : public Entity {
private:
    double armor;             
    std::string className;   
    Tile* currentTile;         
    Vector2 position;        

public:
    Player(const std::string& className, double armor, Tile* startTile, Vector2 startPosition);

    double getArmor() const;           
    std::string getClassName() const;     
    Vector2 getPosition() const;  

    void attack(Entity* entity) override;
    void takeDamage(int dmg) override;         

    bool equip(Item* item);                
    bool deEquip(Item* item);          

    Tile* move(DIRECTION direction, WorldMap& worldMap); // Flytta norr, söder, öst eller väst
};

#endif 
