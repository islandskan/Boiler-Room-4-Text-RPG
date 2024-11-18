#ifndef ENEMY_H
#define ENEMY_H

#include <string>

class Enemy {
private:
    std::string name;
    int health;
    int attackPower;
    bool isFriendly;

public:
    Enemy(const std::string& enemyName, int enemyHealth, int enemyAttackPower, bool friendly = false);

    void attackPlayer(int& playerHealth);
    void takeDamage(int damage);
    void setHostility(bool hostile);
    bool isDead() const;
    void displayStatus() const;
};

#endif
