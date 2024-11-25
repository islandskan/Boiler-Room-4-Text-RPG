#ifndef __TILE_H__
#define __TILE_H__

#include "Entity.h"
#include "Player.h"
#include <memory>

class Tile
{
public:
    void setOccupant(Entity *entity);
    Entity *getOccupant();
    ~Tile();

    void onEnter(const Player &player);
private:
    std::unique_ptr<Entity> m_occupant;
};

#endif
