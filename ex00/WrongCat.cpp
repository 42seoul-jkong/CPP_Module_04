/* Any copyright is dedicated to the Public Domain.
 * https://creativecommons.org/publicdomain/zero/1.0/ */

#include "WrongCat.hpp"
#include <iostream>

#define VERBOSE

WrongCat::WrongCat()
    : WrongAnimal("WrongCat")
{
#ifdef VERBOSE
    std::cout << "WrongCat Default constructor called" << std::endl;
#endif
    // No-OP
}

WrongCat::WrongCat(const WrongCat& that)
    : WrongAnimal(that)
{
#ifdef VERBOSE
    std::cout << "WrongCat Copy constructor called" << std::endl;
#endif
    // No-OP
}

WrongCat& WrongCat::operator=(const WrongCat& that)
{
#ifdef VERBOSE
    std::cout << "WrongCat Copy assignment operator called" << std::endl;
#endif
    if (this != &that)
    {
        this->WrongAnimal::operator=(that);
    }
    return *this;
}

WrongCat::~WrongCat()
{
#ifdef VERBOSE
    std::cout << "WrongCat Destructor called" << std::endl;
#endif
    // No-OP
}

void WrongCat::makeSound() const
{
    std::cout << "bark" << std::endl;
}
