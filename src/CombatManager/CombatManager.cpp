#include "CombatManager.h"

CombatManager::CombatManager(Player& player, Entity& opponent)
    : m_player(player), m_opponent(opponent)
{

}

CombatManager::~CombatManager()
{

}

void CombatManager::takeTurn()
{
    isPlayersTurn != isPlayersTurn;
    if (isPlayersTurn)
    {
        // TODO: Get player input
    }
    else
    {
        entity.attack((Entity *) &m_opponent);
    }
}


int CombatManager::calculateTotalDamage(Player& player)
{

}

int CombatManager::calculateTotalDamage(Entity& entity)
{

}
