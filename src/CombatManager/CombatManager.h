#ifndef __COMBAT_MANAGER_H__
#define __COMBAT_MANAGER_H__

#include "Entity.h"
#include "Player.h"

class CombatManager
{
public:
    CombatManager(Player& player, Entity& opponent);
    ~CombatManager();

    void takeTurn();

private:
    int calculateTotalDamage(Player& player);
    int calculateTotalDamage(Entity& entity);

    bool isPlayersTurn;
    Player& m_player;
    Entity& m_opponent;
};

#endif