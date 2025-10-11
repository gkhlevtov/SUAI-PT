#include "../include/keeper.h"
#include <iostream>

Keeper::Keeper() : data(nullptr), size(0)
{
    std::cout << "Создан объект Keeper (конструктор по умолчанию)\n";
}

Keeper::Keeper(const Keeper &other)
{
    // пока заглушка
    size = 0;
    data = nullptr;
    std::cout << "Создан объект Keeper (конструктор копирования)\n";
}

Keeper::~Keeper()
{
    std::cout << "Удалён объект Keeper (деструктор)\n";
}

void Keeper::Add(Conference *obj)
{
    std::cout << "Добавление объекта (заглушка)\n";
}

void Keeper::Delete(int index)
{
    std::cout << "Удаление объекта (заглушка)\n";
}

void Keeper::ShowAll() const
{
    std::cout << "Просмотр всех объектов (заглушка)\n";
}

void Keeper::SaveToFile(const std::string &path) const
{
    std::cout << "Сохранение в файл (заглушка)\n";
}

void Keeper::LoadFromFile(const std::string &path)
{
    std::cout << "Загрузка из файла (заглушка)\n";
}
