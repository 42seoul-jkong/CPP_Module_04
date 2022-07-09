/* Any copyright is dedicated to the Public Domain.
 * https://creativecommons.org/publicdomain/zero/1.0/ */

#pragma once

#include <string>

class AMateria;

class ICharacter
{
public:
    virtual ~ICharacter() {}
    virtual const std::string& getName() const = 0;
    virtual void equip(AMateria* m) = 0;
    virtual void unequip(int idx) = 0;
    virtual void use(int idx, ICharacter& target) = 0;
    virtual AMateria* slot(int idx) = 0;
};
