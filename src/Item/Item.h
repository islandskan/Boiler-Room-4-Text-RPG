#ifndef ITEM_H
#define ITEM_H

enum class ITEM_TYPE { ARMOR, WEAPON };

class Item {
private: 
    ITEM_TYPE itemType;
    double baseEffectStrength;

public:
    Item(ITEM_TYPE type, double strength)
        : itemType(type), baseEffectStrength(strength) {}

    ITEM_TYPE getItemType() const { return itemType; }
    double getBaseEffectStrength() const { return baseEffectStrength; }
};

#endif
