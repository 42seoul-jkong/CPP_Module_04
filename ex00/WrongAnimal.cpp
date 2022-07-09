/* Any copyright is dedicated to the Public Domain.
 * https://creativecommons.org/publicdomain/zero/1.0/ */

#include "WrongAnimal.hpp"
#include <iostream>

#define VERBOSE

WrongAnimal::WrongAnimal(const std::string& type)
    : type(type)
{
#ifdef VERBOSE
    std::cout << "WrongAnimal Default constructor called" << std::endl;
#endif
    // No-OP
}

WrongAnimal::WrongAnimal(const WrongAnimal& that)
{
#ifdef VERBOSE
    std::cout << "WrongAnimal Copy constructor called" << std::endl;
#endif
    *this = that;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& that)
{
#ifdef VERBOSE
    std::cout << "WrongAnimal Copy assignment operator called" << std::endl;
#endif
    if (this != &that)
    {
        const_cast<std::string&>(this->type) = that.type;
    }
    return *this;
}

WrongAnimal::~WrongAnimal()
{
#ifdef VERBOSE
    std::cout << "WrongAnimal Destructor called" << std::endl;
#endif
    // No-OP
}

const std::string& WrongAnimal::getType() const
{
    return this->type;
}

void WrongAnimal::makeSound() const
{
    std::cout << "WRONG" << std::endl;
}
