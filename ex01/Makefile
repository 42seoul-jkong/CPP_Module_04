# Any copyright is dedicated to the Public Domain.
# https://creativecommons.org/publicdomain/zero/1.0/

TARGET = animals.out
SRCS = main.cpp Animal.cpp Brain.cpp Dog.cpp Cat.cpp

include ../template.mk

Animal.cpp: Animal.hpp
Brain.cpp: Brain.hpp
Dog.cpp: Animal.hpp Brain.hpp Dog.hpp
Cat.cpp: Animal.hpp Brain.hpp Cat.hpp
main.cpp: Animal.hpp Brain.hpp Dog.hpp Cat.hpp
