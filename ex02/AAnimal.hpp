/* Any copyright is dedicated to the Public Domain.
 * https://creativecommons.org/publicdomain/zero/1.0/ */

#pragma once

#include <string>

class AAnimal
{
private:
    const std::string type;

public:
    AAnimal(const std::string& type = "META-ANIMAL");
    AAnimal(const AAnimal& that);
    AAnimal& operator=(const AAnimal& that);
    virtual ~AAnimal();
    const std::string& getType() const;
    virtual void makeSound() const = 0;
};
