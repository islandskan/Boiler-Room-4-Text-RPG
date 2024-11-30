#ifndef __COMBAT_MANAGER_H__
#define __COMBAT_MANAGER_H__

#include "Entity.h"
#include "Player.h"
#include "ContextMenu.h"
#include <functional>

class CombatManager
{
public:
    CombatManager(Player& player, Entity& opponent);
    ~CombatManager();

    void takeTurn();

private:
    ContextMenu combatMenu;
    std::vector<std::function<void()>> actions;

    bool isPlayersTurn;
    Player& m_player;
    Entity& m_opponent;
};

#endif