/* Any copyright is dedicated to the Public Domain.
 * https://creativecommons.org/publicdomain/zero/1.0/ */

#include "Cat.hpp"
#include <iostream>

#define VERBOSE

Cat::Cat()
    : Animal("Cat")
{
#ifdef VERBOSE
    std::cout << "Cat Default constructor called" << std::endl;
#endif
    // No-OP
}

Cat::Cat(const Cat& that)
    : Animal(that)
{
#ifdef VERBOSE
    std::cout << "Cat Copy constructor called" << std::endl;
#endif
    // No-OP
}

Cat& Cat::operator=(const Cat& that)
{
#ifdef VERBOSE
    std::cout << "Cat Copy assignment operator called" << std::endl;
#endif
    if (this != &that)
    {
        this->Animal::operator=(that);
    }
    return *this;
}

Cat::~Cat()
{
#ifdef VERBOSE
    std::cout << "Cat Destructor called" << std::endl;
#endif
    // No-OP
}

void Cat::makeSound() const
{
    std::cout << "meow" << std::endl;
}
