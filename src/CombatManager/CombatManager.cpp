#include "CombatManager.h"

CombatManager::CombatManager(Player& player, Entity& opponent)
    : m_player(player), m_opponent(opponent), combatMenu(ContextMenu({"Attack", "Flee", "Rest"})) 
{ 
    actions.push_back([&player, &opponent]() { player.attack((Entity *) &opponent); });
    actions.push_back([&player, &opponent]() { player.move(); });
    actions.push_back([&player, &opponent]() { player.rest(); });
}

CombatManager::~CombatManager()
{
    
}

void CombatManager::takeTurn()
{
    isPlayersTurn != isPlayersTurn;
    if (isPlayersTurn)
    {
        actions[combatMenu.getInput()]();        
    }
    else
    {
        // Additional logic could be applied.
        m_opponent.attack((Entity *) &m_player);
    }
}
