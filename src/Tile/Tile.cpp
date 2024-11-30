#include "Tile.h"

void Tile::setOccupant(Entity *entity)
{
    this->m_occupant = entity;
}

Entity *Tile::getOccupant()
{
    return this->m_occupant;
}

void Tile::onEnter(const Player &player)
{
    
}

Tile::~Tile() {}
