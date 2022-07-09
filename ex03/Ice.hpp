/* Any copyright is dedicated to the Public Domain.
 * https://creativecommons.org/publicdomain/zero/1.0/ */

#pragma once

#include "AMateria.hpp"

class Ice : public AMateria
{
public:
    Ice();
    Ice(const Ice& that);
    Ice& operator=(const Ice& that);
    ~Ice();
    virtual AMateria* clone() const;
    virtual void use(ICharacter& target);
};
