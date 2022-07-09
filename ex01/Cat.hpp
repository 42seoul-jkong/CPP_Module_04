/* Any copyright is dedicated to the Public Domain.
 * https://creativecommons.org/publicdomain/zero/1.0/ */

#pragma once

#include "Animal.hpp"
#include "Brain.hpp"
#include <string>

class Cat : public Animal
{
private:
    Brain* brain;

public:
    Cat();
    Cat(const Cat& that);
    Cat& operator=(const Cat& that);
    ~Cat();
    void makeSound() const;
    Brain* GetBrain();
    const Brain* GetBrain() const;
};
