#include "../include/program.h"
#include <iostream>

Program::Program() { std::cout << "Создан объект Program (конструктор по умолчанию)\n"; }
Program::Program(const std::string &day, const std::string &t, const std::string &tit)
    : day(day), time(t), title(tit)
{
    std::cout << "Создан объект Program (конструктор с параметрами)\n";
}
Program::Program(const Program &p)
    : day(p.day), time(p.time), title(p.title)
{
    std::cout << "Создан объект Program (конструктор копирования)\n";
}
Program::~Program() { std::cout << "Удалён объект Program (деструктор)\n"; }

void Program::Show() const { std::cout << "Программа: " << day << ", " << time << ", " << title << "\n"; }
void Program::Edit() { std::cout << "Редактирование Program (позже реализуется)\n"; }
void Program::Save(std::ofstream &file) const { /* заглушка */ }
void Program::Load(std::ifstream &file) { /* заглушка */ }
