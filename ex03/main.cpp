/* Any copyright is dedicated to the Public Domain.
 * https://creativecommons.org/publicdomain/zero/1.0/ */

#include "AMateria.hpp"
#include "Character.hpp"
#include "Cure.hpp"
#include "ICharacter.hpp"
#include "IMateriaSource.hpp"
#include "Ice.hpp"
#include "MateriaSource.hpp"

int main()
{
    IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());

    ICharacter* me = new Character("me");

    AMateria* tmp;
    // 0
    tmp = src->createMateria("ice");
    me->equip(tmp);
    // 1
    tmp = src->createMateria("cure");
    me->equip(tmp);
    // 2
    tmp = src->createMateria("ice");
    me->equip(tmp);

    tmp = me->slot(0);
    me->unequip(0);
    delete tmp;

    tmp = me->slot(3);
    me->unequip(3);
    delete tmp;

    ICharacter* bob = new Character("bob");

    me->use(0, *bob);
    me->use(1, *bob);
    me->use(2, *bob);
    me->use(3, *bob);

    delete bob;
    delete me;
    delete src;

    return 0;
}
