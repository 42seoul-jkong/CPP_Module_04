/* Any copyright is dedicated to the Public Domain.
 * https://creativecommons.org/publicdomain/zero/1.0/ */

#pragma once

#include "AMateria.hpp"

class Cure : public AMateria
{
public:
    Cure();
    Cure(const Cure& that);
    Cure& operator=(const Cure& that);
    ~Cure();
    virtual AMateria* clone() const;
    virtual void use(ICharacter& target);
};
