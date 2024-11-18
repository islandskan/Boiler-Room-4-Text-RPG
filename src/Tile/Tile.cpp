#include "Tile.h"

void Tile::setOccupant(Entity &entity)
{
    this->m_occupant = new Entity(entity);
}

Entity *Tile::getOccupant()
{
    return this->m_occupant;
}

void Tile::onEnter(const Player &player)
{
    
}

Tile::~Tile()
{
    delete this->m_occupant;
}
