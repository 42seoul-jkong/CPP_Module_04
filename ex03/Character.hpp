/* Any copyright is dedicated to the Public Domain.
 * https://creativecommons.org/publicdomain/zero/1.0/ */

#pragma once

#include "ICharacter.hpp"

#define INVENTORY_LIMIT 4

class Character : public ICharacter
{
private:
    const std::string name;
    AMateria* inventory[INVENTORY_LIMIT];

public:
    Character(const std::string& name = "(null)");
    Character(const Character& that);
    Character& operator=(const Character& that);
    ~Character();
    virtual const std::string& getName() const;
    virtual void equip(AMateria* m);
    virtual void unequip(int idx);
    virtual void use(int idx, ICharacter& target);
    virtual AMateria* slot(int idx);
};
