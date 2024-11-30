#ifndef PLAYER_H
#define PLAYER_H

#include <string>
#include "Tile.h"    
#include "WorldMap.h"  
#include "Vector2.h"  
#include "Item.h"  
#include "DIRECTION.h"
#include "ContextMenu.h"

class Player : public Entity {
private:
    int hpRecoveredOnRest;
    double armor;             
    std::string className;   
    Tile* currentTile;         
    Vector2 position;        

    WorldMap &worldMap;
    ContextMenu directionsMenu{{"North", "South", "East", "West"}};
public:
    Player(const std::string& className, double armor, Tile* startTile, Vector2 startPosition, int hpRecoveredOnRest, WorldMap& worldMap);

    double getArmor() const;           
    std::string getClassName() const;     
    Vector2 getPosition() const;  

    void attack(Entity* entity) override;
    void takeDamage(int dmg) override;         

    void rest();

    bool equip(Item* item);                
    bool deEquip(Item* item);          

    Tile* move(DIRECTION direction); // Flytta norr, söder, öst eller väst
    Tile* move();
};

#endif 
