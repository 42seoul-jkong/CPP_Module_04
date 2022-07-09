/* Any copyright is dedicated to the Public Domain.
 * https://creativecommons.org/publicdomain/zero/1.0/ */

#pragma once

#include "Animal.hpp"
#include <string>

class Cat : public Animal
{
public:
    Cat();
    Cat(const Cat& that);
    Cat& operator=(const Cat& that);
    ~Cat();
    void makeSound() const;
};
