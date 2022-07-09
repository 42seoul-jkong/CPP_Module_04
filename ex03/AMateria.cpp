/* Any copyright is dedicated to the Public Domain.
 * https://creativecommons.org/publicdomain/zero/1.0/ */

#include "AMateria.hpp"
#include <iostream>

AMateria::AMateria(const std::string& type)
    : type(type)
{
#ifdef VERBOSE
    std::cout << "AMateria Default constructor called" << std::endl;
#endif
    // No-OP
}

AMateria::AMateria(const AMateria& that)
    : type(that.type)
{
#ifdef VERBOSE
    std::cout << "AMateria Copy constructor called" << std::endl;
#endif
    // No-OP
}

AMateria& AMateria::operator=(const AMateria& that)
{
#ifdef VERBOSE
    std::cout << "AMateria Copy assignment operator called" << std::endl;
#endif
    (void)&that;
    // No-OP
    return *this;
}

AMateria::~AMateria()
{
#ifdef VERBOSE
    std::cout << "AMateria Destructor called" << std::endl;
#endif
    // No-OP
}

const std::string& AMateria::getType() const
{
    return this->type;
}

void AMateria::use(ICharacter& target) { (void)&target; }
