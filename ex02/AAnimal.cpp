/* Any copyright is dedicated to the Public Domain.
 * https://creativecommons.org/publicdomain/zero/1.0/ */

#include "AAnimal.hpp"
#include <iostream>

#define VERBOSE

AAnimal::AAnimal(const std::string& type)
    : type(type)
{
#ifdef VERBOSE
    std::cout << "AAnimal Default constructor called" << std::endl;
#endif
    // No-OP
}

AAnimal::AAnimal(const AAnimal& that)
{
#ifdef VERBOSE
    std::cout << "AAnimal Copy constructor called" << std::endl;
#endif
    *this = that;
}

AAnimal& AAnimal::operator=(const AAnimal& that)
{
#ifdef VERBOSE
    std::cout << "AAnimal Copy assignment operator called" << std::endl;
#endif
    if (this != &that)
    {
        const_cast<std::string&>(this->type) = that.type;
    }
    return *this;
}

AAnimal::~AAnimal()
{
#ifdef VERBOSE
    std::cout << "AAnimal Destructor called" << std::endl;
#endif
    // No-OP
}

const std::string& AAnimal::getType() const
{
    return this->type;
}
