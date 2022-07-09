/* Any copyright is dedicated to the Public Domain.
 * https://creativecommons.org/publicdomain/zero/1.0/ */

#pragma once

#include <string>

class WrongAnimal
{
private:
    const std::string type;

public:
    WrongAnimal(const std::string& type = "META-ANIMAL");
    WrongAnimal(const WrongAnimal& that);
    WrongAnimal& operator=(const WrongAnimal& that);
    ~WrongAnimal();
    const std::string& getType() const;
    void makeSound() const;
};
