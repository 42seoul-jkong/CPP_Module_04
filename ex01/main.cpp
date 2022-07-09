/* Any copyright is dedicated to the Public Domain.
 * https://creativecommons.org/publicdomain/zero/1.0/ */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include <iostream>
#include <unistd.h>

int main()
{
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    delete j; // should not create a leak
    delete i;

    const std::size_t count = 100;
    Animal* arr[count];
    for (std::size_t i = 0; i < count; i++)
    {
        if (i & 1)
        {
            arr[i] = new Dog();
        }
        else
        {
            arr[i] = new Cat();
        }
    }
    for (std::size_t i = 0; i < count; i++)
    {
        delete arr[i];
    }

    Dog dog1 = Dog();
    Brain* dog1_brain = dog1.GetBrain();
    dog1_brain->SetIdea(0, "I'm Dog.");
    dog1_brain->SetIdea(1, "Wow!");
    Dog dog2(dog1);
    Brain* dog2_brain = dog2.GetBrain();
    dog2_brain->SetIdea(0, "I'm Dog 2.");
    dog1_brain->SetIdea(0, "I'm Dog 1.");

    std::cout << "Dog 1's Idea: " << dog1.GetBrain()->GetIdea(0) << std::endl;
    std::cout << "Dog 2's Idea: " << dog2.GetBrain()->GetIdea(0) << std::endl;

    Cat cat1 = Cat();
    Cat cat2(cat1);

    system("leaks animals.out");
    return 0;
}
