#include "../include/speaker.h"
#include <iostream>

Speaker::Speaker() { std::cout << "Создан объект Speaker (конструктор по умолчанию)\n"; }
Speaker::Speaker(const std::string &n, const std::string &org, const std::string &rep, const std::string &ann)
    : name(n), organization(org), report(rep), annotation(ann)
{
    std::cout << "Создан объект Speaker (конструктор с параметрами)\n";
}
Speaker::Speaker(const Speaker &s)
    : name(s.name), organization(s.organization), report(s.report), annotation(s.annotation)
{
    std::cout << "Создан объект Speaker (конструктор копирования)\n";
}
Speaker::~Speaker() { std::cout << "Удалён объект Speaker (деструктор)\n"; }

void Speaker::Show() const { std::cout << "Выступающий: " << name << ", " << organization << ", " << report << "\n"; }
void Speaker::Edit() { std::cout << "Редактирование Speaker (позже реализуется)\n"; }
void Speaker::Save(std::ofstream &file) const { /* заглушка */ }
void Speaker::Load(std::ifstream &file) { /* заглушка */ }
