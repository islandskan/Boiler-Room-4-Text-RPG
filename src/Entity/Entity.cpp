#include "Entity.h"

bool Entity::isDead()
{
    return this->m_health < 0;
}

void Entity::heal(int hp)
{
    if (this->m_heatlth < 0) 
        return;
    
    this->m_health += hp;
    if (m_health > m_maxHealth)
        m_health = m_maxHealth;
}

int Entity::getHealth()
{
    return m_health;
}

int Entity::getDamage()
{
    return m_damage;
}
