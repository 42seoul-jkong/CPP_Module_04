# Any copyright is dedicated to the Public Domain.
# https://creativecommons.org/publicdomain/zero/1.0/

TARGET = animals.out
SRCS = main.cpp Animal.cpp Dog.cpp Cat.cpp WrongAnimal.cpp WrongCat.cpp

include ../template.mk

Animal.cpp: Animal.hpp
Dog.cpp: Animal.hpp Dog.hpp
Cat.cpp: Animal.hpp Cat.hpp
WrongAnimal.cpp: WrongAnimal.hpp
WrongCat.cpp: WrongAnimal.hpp WrongCat.hpp
main.cpp: Animal.hpp Dog.hpp Cat.hpp WrongAnimal.hpp WrongCat.hpp
