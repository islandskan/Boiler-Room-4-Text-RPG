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
private:
    int m_health, m_maxHealth, m_damage;
    // Inventory inventory;
    Vector2 m_position;
};

#endif