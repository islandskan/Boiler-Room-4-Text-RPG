#include "Enemy.h"
#include <iostream>

// Konstruktor
Enemy::Enemy(const std::string& name, int health, int maxHealth, int damage, bool friendly)
{
    m_name = name;
    m_health = health;
    m_maxHealth = maxHealth;
    m_damage = damage;
    m_friendly = friendly;
}

// Få namnet på fienden
std::string Enemy::getName() const {
    return m_name;
}

// Kontrollera om fienden är vänlig
bool Enemy::isFriendly() const {
    return m_friendly;
}

// Sätt om fienden är vänlig eller fientlig
void Enemy::setFriendly(bool friendly) {
    m_friendly = friendly;
}

// Fienden attackerar en annan enhet
void Enemy::attack(Entity* entity) {
    if (m_friendly) {
        std::cout << m_name << " is friendly and doesn't attack!\n";
    } else {
        std::cout << m_name << " attacks for " << m_damage << " damage!\n";
        entity->takeDamage(m_damage);
    }
}

// Fienden tar skada
void Enemy::takeDamage(int dmg) {
    m_health -= dmg;
    std::cout << m_name << " takes " << dmg << " damage! Health
