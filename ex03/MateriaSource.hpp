/* Any copyright is dedicated to the Public Domain.
 * https://creativecommons.org/publicdomain/zero/1.0/ */

#pragma once

#include "AMateria.hpp"
#include "IMateriaSource.hpp"

#define SLOT_LIMIT 4

class MateriaSource : public IMateriaSource
{
private:
    AMateria* slot[SLOT_LIMIT];

public:
    MateriaSource();
    MateriaSource(const MateriaSource& that);
    MateriaSource& operator=(const MateriaSource& that);
    ~MateriaSource();
    virtual void learnMateria(AMateria* m);
    virtual AMateria* createMateria(const std::string& type);
};
