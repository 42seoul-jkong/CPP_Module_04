/* Any copyright is dedicated to the Public Domain.
 * https://creativecommons.org/publicdomain/zero/1.0/ */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include <iostream>

int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound();    // will output the cat sound!
    j->makeSound();    // will output the dog sound!
    meta->makeSound(); // will output the animal sound!

    const WrongAnimal* wrong_meta = new WrongAnimal();
    const WrongAnimal* wrong_j = new WrongCat();
    const WrongCat* wrong_i = new WrongCat();
    wrong_i->makeSound();    // will output the wrong cat sound!
    wrong_j->makeSound();    // will output the wrong animal sound!
    wrong_meta->makeSound(); // will output the wrong animal sound!

    return 0;
}
