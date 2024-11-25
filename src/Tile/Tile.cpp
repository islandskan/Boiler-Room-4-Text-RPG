#include "Tile.h"
#include <memory>

void Tile::setOccupant(Entity *entity)
{
    this->m_occupant = std::make_unique<Entity>(entity);
}

Entity *Tile::getOccupant()
{
    return this->m_occupant.get();
}

void Tile::onEnter(const Player &player)
{
    
}

Tile::~Tile() {
    
}
