/* Any copyright is dedicated to the Public Domain.
 * https://creativecommons.org/publicdomain/zero/1.0/ */

#include "Animal.hpp"
#include <iostream>

#define VERBOSE

Animal::Animal(const std::string& type)
    : type(type)
{
#ifdef VERBOSE
    std::cout << "Animal Default constructor called" << std::endl;
#endif
    // No-OP
}

Animal::Animal(const Animal& that)
{
#ifdef VERBOSE
    std::cout << "Animal Copy constructor called" << std::endl;
#endif
    *this = that;
}

Animal& Animal::operator=(const Animal& that)
{
#ifdef VERBOSE
    std::cout << "Animal Copy assignment operator called" << std::endl;
#endif
    if (this != &that)
    {
        const_cast<std::string&>(this->type) = that.type;
    }
    return *this;
}

Animal::~Animal()
{
#ifdef VERBOSE
    std::cout << "Animal Destructor called" << std::endl;
#endif
    // No-OP
}

const std::string& Animal::getType() const
{
    return this->type;
}

void Animal::makeSound() const
{
    std::cout << "..." << std::endl;
}
