/* Any copyright is dedicated to the Public Domain.
 * https://creativecommons.org/publicdomain/zero/1.0/ */

#pragma once

#include "ICharacter.hpp"
#include <string>

class AMateria
{
protected:
    const std::string type;

public:
    AMateria(const std::string& type);
    AMateria(const AMateria& that);
    AMateria& operator=(const AMateria& that);
    virtual ~AMateria();
    const std::string& getType() const;
    virtual AMateria* clone() const = 0;
    virtual void use(ICharacter& target);

private:
    AMateria();
};
