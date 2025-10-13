#pragma once
#include <iostream>
#include <fstream>
#include <string>

enum class ConfType
{
    SPEAKER,
    ADMIN,
    PROGRAM
};

class Conference
{
public:
    virtual void Show() const = 0;
    virtual void Edit() = 0;
    virtual void Save(std::ofstream &file) const = 0;
    virtual void Load(std::ifstream &file) = 0;
    virtual ~Conference() {}

    virtual Conference *Clone() const = 0;
    virtual ConfType Type() const = 0;
};
