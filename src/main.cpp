#include "Enemy.h"
#include <iostream>
#include <ctime>

int main() {
    // Seed
    srand(static_cast<unsigned int>(time(0)));

    // Skapar fiende
    Enemy enemy1("enemy1", 50, 15);

    // Liv
    int playerHealth = 100;

    // Info
    enemy1.displayStatus();

    // Enemy attackerar spelare
    enemy1.attackPlayer(playerHealth);
    std::cout << "Player's health: " << playerHealth << "\n";

    // Spelare attackerar
    enemy1.takeDamage(20);

    // Från fiende till vän
    enemy1.setHostility(false);

    // Info
    enemy1.displayStatus();

    return 0;
}
