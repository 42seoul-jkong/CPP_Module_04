/* Any copyright is dedicated to the Public Domain.
 * https://creativecommons.org/publicdomain/zero/1.0/ */

#pragma once

#include "WrongAnimal.hpp"
#include <string>

class WrongCat : public WrongAnimal
{
public:
    WrongCat();
    WrongCat(const WrongCat& that);
    WrongCat& operator=(const WrongCat& that);
    ~WrongCat();
    void makeSound() const;
};
