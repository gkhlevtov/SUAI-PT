#pragma once
#include "conference.h"

class Keeper
{
private:
    Conference **data;
    int size;

public:
    Keeper();                               // конструктор по умолчанию
    Keeper(const Keeper &other);            // конструктор копирования
    Keeper &operator=(const Keeper &other); // присваивание
    ~Keeper();                              // деструктор

    void Add(Conference *obj);
    void Delete(int index);
    void ShowAll() const;
    void SaveToFile(const std::string &path) const;
    void LoadFromFile(const std::string &path);
    void EditByIndex(int index);
    int Size() const { return size; }
};