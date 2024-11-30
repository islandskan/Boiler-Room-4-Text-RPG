#ifndef __ENTITY_H__
#define __ENTITY_H__

class Entity
{
public:
    // Inventory const * getInventory();
    virtual void attack(Entity* entity) = 0;
    virtual void takeDamage(int dmg) = 0;
    bool isDead();
    void heal(int hp);
    int getHealth();
    int getDamage();
protected:
    int m_health, m_maxHealth, m_damage;
    // Inventory inventory;
};

#endif
