# Any copyright is dedicated to the Public Domain.
# https://creativecommons.org/publicdomain/zero/1.0/

TARGET = animals.out
SRCS = main.cpp AAnimal.cpp Brain.cpp Dog.cpp Cat.cpp

include ../template.mk

AAnimal.cpp: AAnimal.hpp
Brain.cpp: Brain.hpp
Dog.cpp: AAnimal.hpp Brain.hpp Dog.hpp
Cat.cpp: AAnimal.hpp Brain.hpp Cat.hpp
main.cpp: AAnimal.hpp Brain.hpp Dog.hpp Cat.hpp
