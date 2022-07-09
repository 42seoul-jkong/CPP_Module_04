/* Any copyright is dedicated to the Public Domain.
 * https://creativecommons.org/publicdomain/zero/1.0/ */

#include "Character.hpp"
#include "AMateria.hpp"
#include <iostream>

Character::Character(const std::string& name)
    : name(name)
{
#ifdef VERBOSE
    std::cout << "Character Default constructor called" << std::endl;
#endif
    for (std::size_t i = 0; i < INVENTORY_LIMIT; i++)
    {
        this->inventory[i] = NULL;
    }
}

Character::Character(const Character& that)
    : name(that.name)
{
#ifdef VERBOSE
    std::cout << "Character Copy constructor called" << std::endl;
#endif
    for (std::size_t i = 0; i < INVENTORY_LIMIT; i++)
    {
        if (that.inventory[i])
        {
            this->inventory[i] = that.inventory[i]->clone();
        }
        else
        {
            this->inventory[i] = NULL;
        }
    }
}

Character& Character::operator=(const Character& that)
{
#ifdef VERBOSE
    std::cout << "Character Copy assignment operator called" << std::endl;
#endif
    if (this != &that)
    {
        const_cast<std::string&>(this->name) = that.name;
        Character tmp;
        // Begin std::swap(this->inventory, tmp.inventory);
        for (std::size_t i = 0; i < INVENTORY_LIMIT; i++)
        {
            AMateria* e = this->inventory[i];
            this->inventory[i] = tmp.inventory[i];
            tmp.inventory[i] = e;
        }
        // End
        for (std::size_t i = 0; i < INVENTORY_LIMIT; i++)
        {
            if (that.inventory[i])
            {
                this->inventory[i] = that.inventory[i]->clone();
            }
        }
    }
    return *this;
}

Character::~Character()
{
#ifdef VERBOSE
    std::cout << "Character Destructor called" << std::endl;
#endif
    for (std::size_t i = 0; i < INVENTORY_LIMIT; i++)
    {
        delete this->inventory[i];
    }
}

const std::string& Character::getName() const
{
    return this->name;
}

void Character::equip(AMateria* m)
{
    for (std::size_t i = 0; i < INVENTORY_LIMIT; i++)
    {
        if (!this->inventory[i])
        {
            this->inventory[i] = m;
            return;
        }
    }
    // No-OP: Not Found
}

void Character::unequip(int idx)
{
    if (idx < 0 || idx >= INVENTORY_LIMIT)
    {
        // No-OP
        return;
    }
    this->inventory[idx] = NULL;
}

void Character::use(int idx, ICharacter& target)
{
    if (idx < 0 || idx >= INVENTORY_LIMIT)
    {
        // No-OP
        return;
    }
    if (this->inventory[idx])
    {
        this->inventory[idx]->use(target);
    }
    // else: No-OP: unexisting
}

AMateria* Character::slot(int idx)
{
    return this->inventory[idx];
}
