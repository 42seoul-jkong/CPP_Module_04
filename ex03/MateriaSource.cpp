/* Any copyright is dedicated to the Public Domain.
 * https://creativecommons.org/publicdomain/zero/1.0/ */

#include "MateriaSource.hpp"
#include "util.h"
#include <iostream>

MateriaSource::MateriaSource()
{
#ifdef VERBOSE
    std::cout << "MateriaSource Default constructor called" << std::endl;
#endif
    for (std::size_t i = 0; i < _countof(this->slot); i++)
    {
        this->slot[i] = NULL;
    }
}

MateriaSource::MateriaSource(const MateriaSource& that)
{
#ifdef VERBOSE
    std::cout << "MateriaSource Copy constructor called" << std::endl;
#endif
    for (std::size_t i = 0; i < _countof(this->slot); i++)
    {
        if (that.slot[i])
        {
            this->slot[i] = that.slot[i]->clone();
        }
        else
        {
            this->slot[i] = NULL;
        }
    }
}

MateriaSource& MateriaSource::operator=(const MateriaSource& that)
{
#ifdef VERBOSE
    std::cout << "MateriaSource Copy assignment operator called" << std::endl;
#endif
    MateriaSource tmp;
    // Begin std::swap(this->slot, tmp.slot);
    for (std::size_t i = 0; i < _countof(this->slot); i++)
    {
        AMateria* e = this->slot[i];
        this->slot[i] = tmp.slot[i];
        tmp.slot[i] = e;
    }
    // End
    for (std::size_t i = 0; i < _countof(this->slot); i++)
    {
        if (that.slot[i])
        {
            this->slot[i] = that.slot[i]->clone();
        }
    }
    return *this;
}

MateriaSource::~MateriaSource()
{
#ifdef VERBOSE
    std::cout << "MateriaSource Destructor called" << std::endl;
#endif
    for (std::size_t i = 0; i < _countof(this->slot); i++)
    {
        delete this->slot[i];
    }
}

void MateriaSource::learnMateria(AMateria* m)
{
    for (std::size_t i = 0; i < _countof(this->slot); i++)
    {
        if (!this->slot[i])
        {
            this->slot[i] = m;
            return;
        }
    }
    // No-OP: Not Found
}

AMateria* MateriaSource::createMateria(const std::string& type)
{
    for (std::size_t i = 0; i < _countof(this->slot); i++)
    {
        if (this->slot[i] && this->slot[i]->getType() == type)
        {
            return this->slot[i]->clone();
        }
    }
    return NULL;
}
