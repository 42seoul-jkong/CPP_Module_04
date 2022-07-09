/* Any copyright is dedicated to the Public Domain.
 * https://creativecommons.org/publicdomain/zero/1.0/ */

#include "Dog.hpp"
#include <iostream>

#define VERBOSE

Dog::Dog()
    : AAnimal("Dog"), brain(new Brain())
{
#ifdef VERBOSE
    std::cout << "Dog Default constructor called" << std::endl;
#endif
    // No-OP
}

Dog::Dog(const Dog& that)
    : AAnimal(that), brain(new Brain())
{
#ifdef VERBOSE
    std::cout << "Dog Copy constructor called" << std::endl;
#endif
    if (that.brain)
    {
        *this->brain = *that.brain;
    }
}

Dog& Dog::operator=(const Dog& that)
{
#ifdef VERBOSE
    std::cout << "Dog Copy assignment operator called" << std::endl;
#endif
    if (this != &that)
    {
        this->AAnimal::operator=(that);
        if (that.brain)
        {
            Dog tmp;
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

Dog::~Dog()
{
#ifdef VERBOSE
    std::cout << "Dog Destructor called" << std::endl;
#endif
    delete this->brain;
}

void Dog::makeSound() const
{
    std::cout << "Bow-wow" << std::endl;
}

Brain* Dog::GetBrain()
{
    return this->brain;
}

const Brain* Dog::GetBrain() const
{
    return this->brain;
}
