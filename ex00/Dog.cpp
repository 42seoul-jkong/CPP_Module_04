/* Any copyright is dedicated to the Public Domain.
 * https://creativecommons.org/publicdomain/zero/1.0/ */

#include "Dog.hpp"
#include <iostream>

#define VERBOSE

Dog::Dog()
    : Animal("Dog")
{
#ifdef VERBOSE
    std::cout << "Dog Default constructor called" << std::endl;
#endif
    // No-OP
}

Dog::Dog(const Dog& that)
    : Animal(that)
{
#ifdef VERBOSE
    std::cout << "Dog Copy constructor called" << std::endl;
#endif
    // No-OP
}

Dog& Dog::operator=(const Dog& that)
{
#ifdef VERBOSE
    std::cout << "Dog Copy assignment operator called" << std::endl;
#endif
    if (this != &that)
    {
        this->Animal::operator=(that);
    }
    return *this;
}

Dog::~Dog()
{
#ifdef VERBOSE
    std::cout << "Dog Destructor called" << std::endl;
#endif
    // No-OP
}

void Dog::makeSound() const
{
    std::cout << "Bow-wow" << std::endl;
}
