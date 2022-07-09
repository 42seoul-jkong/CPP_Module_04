/* Any copyright is dedicated to the Public Domain.
 * https://creativecommons.org/publicdomain/zero/1.0/ */

#pragma once

#include <string>

class Brain
{
private:
    std::string ideas[100];

public:
    Brain();
    Brain(const Brain& that);
    Brain& operator=(const Brain& that);
    ~Brain();
    const std::string& GetIdea(std::size_t i) const;
    void SetIdea(std::size_t i, const std::string& idea);
};
