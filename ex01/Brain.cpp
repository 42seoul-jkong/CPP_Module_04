/* Any copyright is dedicated to the Public Domain.
 * https://creativecommons.org/publicdomain/zero/1.0/ */

#include "Brain.hpp"
#include <iostream>

#define VERBOSE

Brain::Brain()
    : ideas()
{
#ifdef VERBOSE
    std::cout << "Brain Default constructor called" << std::endl;
#endif
    // No-OP
}

Brain::Brain(const Brain& that)
{
#ifdef VERBOSE
    std::cout << "Brain Copy constructor called" << std::endl;
#endif
    *this = that;
}

Brain& Brain::operator=(const Brain& that)
{
#ifdef VERBOSE
    std::cout << "Brain Copy assignment operator called" << std::endl;
#endif
    if (this != &that)
    {
        for (std::size_t i = 0; i < sizeof(this->ideas) / sizeof(this->ideas[0]); i++)
        {
            this->ideas[i] = that.ideas[i];
        }
    }
    return *this;
}

Brain::~Brain()
{
#ifdef VERBOSE
    std::cout << "Brain Destructor called" << std::endl;
#endif
    // No-OP
}

const std::string& Brain::GetIdea(std::size_t i) const
{
    return this->ideas[i];
}

void Brain::SetIdea(std::size_t i, const std::string& idea)
{
    this->ideas[i] = idea;
}
