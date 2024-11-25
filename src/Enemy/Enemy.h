#ifndef __ENEMY_H__
#define __ENEMY_H__

#include "Entity.h"
#include <string>

class Enemy : public Entity {
public:
    Enemy(const std::string& name, int health, int maxHealth, int damage, bool friendly);
    void attack(Entity* entity) override;
    void takeDamage(int dmg) override;
    std::string getName() const;
    bool isFriendly() const;
    void setFriendly(bool friendly);

private:
    std::string m_name;
    bool m_friendly;
};

#endif
