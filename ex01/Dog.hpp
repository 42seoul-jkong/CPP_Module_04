/* Any copyright is dedicated to the Public Domain.
 * https://creativecommons.org/publicdomain/zero/1.0/ */

#pragma once

#include "Animal.hpp"
#include "Brain.hpp"
#include <string>

class Dog : public Animal
{
private:
    Brain* brain;

public:
    Dog();
    Dog(const Dog& that);
    Dog& operator=(const Dog& that);
    ~Dog();
    void makeSound() const;
    Brain* GetBrain();
    const Brain* GetBrain() const;
};
