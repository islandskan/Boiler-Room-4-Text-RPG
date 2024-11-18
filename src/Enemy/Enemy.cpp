#include "Enemy.h"
#include <iostream>
#include <cstdlib> // För random numbers

// Kons
Enemy::Enemy(const std::string& enemyName, int enemyHealth, int enemyAttackPower, bool friendly)
    : name(enemyName), health(enemyHealth), attackPower(enemyAttackPower), isFriendly(friendly) {}

// Attackera spelare
void Enemy::attackPlayer(int& playerHealth) {
    if (isFriendly) {
        std::cout << name << " is friendly and doesn't attack!\n";
    } else {
        int damage = (rand() % attackPower) + 1;
        std::cout << name << " attacks the player for " << damage << " damage!\n";
        playerHealth -= damage;
    }
}

// Skadas
void Enemy::takeDamage(int damage) {
    health -= damage;
    std::cout << name << " takes " << damage << " damage. Health is now " << health << ".\n";
    if (health <= 0) {
        std::cout << name << " has been killed!\n";
    }
}

// Vänlig
void Enemy::setHostility(bool hostile) {
    isFriendly = !hostile;
    std::cout << name << (isFriendly ? " is now friendly.\n" : " is now hostile.\n");
}

// Om enemy är död
bool Enemy::isDead() const {
    return health <= 0;
}

// Printa info
void Enemy::displayStatus() const {
    std::cout << "Enemy: " << name << "\n"
              << "Health: " << health << "\n"
              << "Attack Power: " << attackPower << "\n"
              << (isFriendly ? "Friendly\n" : "Hostile\n");
}
