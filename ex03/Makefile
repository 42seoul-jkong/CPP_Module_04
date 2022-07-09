# Any copyright is dedicated to the Public Domain.
# https://creativecommons.org/publicdomain/zero/1.0/

TARGET = materias.out
SRCS = main.cpp AMateria.cpp Ice.cpp Cure.cpp Character.cpp MateriaSource.cpp

include ../template.mk

AMateria.cpp: AMateria.hpp
Ice.cpp: Ice.hpp AMateria.hpp
Cure.cpp: Cure.hpp AMateria.hpp
Character.cpp: Character.hpp ICharacter.hpp
MateriaSource.cpp: MateriaSource.hpp IMateriaSource.hpp
main.cpp: Ice.hpp Cure.hpp ICharacter.hpp IMateriaSource.hpp AMateria.hpp Character.hpp MateriaSource.hpp
