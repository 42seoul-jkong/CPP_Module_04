/* Any copyright is dedicated to the Public Domain.
 * https://creativecommons.org/publicdomain/zero/1.0/ */

#include "Cat.hpp"
#include <iostream>

#define VERBOSE

Cat::Cat()
    : Animal("Cat"), brain(new Brain())
{
#ifdef VERBOSE
    std::cout << "Cat Default constructor called" << std::endl;
#endif
    // No-OP
}

Cat::Cat(const Cat& that)
    : Animal(that), brain(new Brain())
{
#ifdef VERBOSE
    std::cout << "Cat Copy constructor called" << std::endl;
#endif
    if (that.brain)
    {
        *this->brain = *that.brain;
    }
}

Cat& Cat::operator=(const Cat& that)
{
#ifdef VERBOSE
    std::cout << "Cat Copy assignment operator called" << std::endl;
#endif
    if (this != &that)
    {
        this->Animal::operator=(that);
        if (that.brain)
        {
            Cat tmp;
            // Begin std::swap(this->brain, tmp.brain);
            Brain* brain = this->brain;
            this->brain = tmp.brain;
            tmp.brain = brain;
            // End
            *this->brain = *that.brain;
        }
    }
    return *this;
}

Cat::~Cat()
{
#ifdef VERBOSE
    std::cout << "Cat Destructor called" << std::endl;
#endif
    delete this->brain;
}

void Cat::makeSound() const
{
    std::cout << "meow" << std::endl;
}

Brain* Cat::GetBrain()
{
    return this->brain;
}

const Brain* Cat::GetBrain() const
{
    return this->brain;
}
