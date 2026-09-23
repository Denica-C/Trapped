#pragma once
#include "Item.h"

class Weapon : public Item {
private:
    int damage;     // The amount of damage the weapon deals(for health bar?)

public:
    // Constructor: Initializes weapon with a name, image path, damage, and durability
    Weapon(std::string itemName, std::string imagePath, int damage);
    Weapon(string weaponName);

    // Getters
    int getDamage() const;
};

