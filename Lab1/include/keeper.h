#pragma once
#include "conference.h"

class Keeper
{
private:
    Conference **data;
    int size;

public:
    Keeper();
    Keeper(const Keeper &);
    ~Keeper();

    void Add(Conference *obj);
    void Delete(int index);
    void ShowAll() const;
    void SaveToFile(const std::string &path) const;
    void LoadFromFile(const std::string &path);
};
