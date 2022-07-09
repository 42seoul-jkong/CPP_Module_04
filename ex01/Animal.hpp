/* Any copyright is dedicated to the Public Domain.
 * https://creativecommons.org/publicdomain/zero/1.0/ */

#pragma once

#include <string>

class Animal
{
private:
    const std::string type;

public:
    Animal(const std::string& type = "META-ANIMAL");
    Animal(const Animal& that);
    Animal& operator=(const Animal& that);
    virtual ~Animal();
    const std::string& getType() const;
    virtual void makeSound() const;
};
