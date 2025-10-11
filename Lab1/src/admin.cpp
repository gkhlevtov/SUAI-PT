#include "../include/admin.h"
#include <iostream>

Admin::Admin() { std::cout << "Создан объект Admin (конструктор по умолчанию)\n"; }
Admin::Admin(const std::string &n, const std::string &pos, const std::string &resp)
    : name(n), position(pos), responsibility(resp)
{
    std::cout << "Создан объект Admin (конструктор с параметрами)\n";
}
Admin::Admin(const Admin &a)
    : name(a.name), position(a.position), responsibility(a.responsibility)
{
    std::cout << "Создан объект Admin (конструктор копирования)\n";
}
Admin::~Admin() { std::cout << "Удалён объект Admin (деструктор)\n"; }

void Admin::Show() const { std::cout << "Администратор: " << name << ", " << position << ", " << responsibility << "\n"; }
void Admin::Edit() { std::cout << "Редактирование Admin (позже реализуется)\n"; }
void Admin::Save(std::ofstream &file) const { /* заглушка */ }
void Admin::Load(std::ifstream &file) { /* заглушка */ }
