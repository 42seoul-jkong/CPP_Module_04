/* Any copyright is dedicated to the Public Domain.
 * https://creativecommons.org/publicdomain/zero/1.0/ */

#include "Ice.hpp"
#include <iostream>

Ice::Ice()
    : AMateria("ice")
{
#ifdef VERBOSE
    std::cout << "Ice Default constructor called" << std::endl;
#endif
    // No-OP
}

Ice::Ice(const Ice& that)
    : AMateria(that)
{
#ifdef VERBOSE
    std::cout << "Ice Copy constructor called" << std::endl;
#endif
    *this = that;
}

Ice& Ice::operator=(const Ice& that)
{
#ifdef VERBOSE
    std::cout << "Ice Copy assignment operator called" << std::endl;
#endif
    if (this != &that)
    {
        this->AMateria::operator=(that);
    }
    return *this;
}

Ice::~Ice()
{
#ifdef VERBOSE
    std::cout << "Ice Destructor called" << std::endl;
#endif
    // No-OP
}

AMateria* Ice::clone() const
{
    return new Ice(*this);
}

void Ice::use(ICharacter& target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
