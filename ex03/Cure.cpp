/* Any copyright is dedicated to the Public Domain.
 * https://creativecommons.org/publicdomain/zero/1.0/ */

#include "Cure.hpp"
#include <iostream>

Cure::Cure()
    : AMateria("cure")
{
#ifdef VERBOSE
    std::cout << "Cure Default constructor called" << std::endl;
#endif
    // No-OP
}

Cure::Cure(const Cure& that)
    : AMateria(that)
{
#ifdef VERBOSE
    std::cout << "Cure Copy constructor called" << std::endl;
#endif
    // No-OP
}

Cure& Cure::operator=(const Cure& that)
{
#ifdef VERBOSE
    std::cout << "Cure Copy assignment operator called" << std::endl;
#endif
    if (this != &that)
    {
        this->AMateria::operator=(that);
    }
    return *this;
}

Cure::~Cure()
{
#ifdef VERBOSE
    std::cout << "Cure Destructor called" << std::endl;
#endif
    // No-OP
}

AMateria* Cure::clone() const
{
    return new Cure(*this);
}

void Cure::use(ICharacter& target)
{
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
