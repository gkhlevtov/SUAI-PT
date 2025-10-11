#pragma once
#include <iostream>
#include <fstream>
#include <string>

class Conference
{
public:
    virtual void Show() const = 0;
    virtual void Edit() = 0;
    virtual void Save(std::ofstream &file) const = 0;
    virtual void Load(std::ifstream &file) = 0;
    virtual ~Conference() {}
};
