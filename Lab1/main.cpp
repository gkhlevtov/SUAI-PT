#include <iostream>
#include "include/keeper.h"
#include "include/speaker.h"
#include "include/admin.h"
#include "include/program.h"

int main()
{
    // Создание контейнера Keeper
    Keeper keeper;

    // Создание объектов различных типов
    Speaker sp("Ivanov I.I.", "SUAI", "Modern Technologies", "Talk description");
    Admin ad("Petrov P.P.", "Organizer", "Participant registration");
    Program pr("Monday", "10:00", "Conference opening");

    // Добавление объектов в контейнер
    keeper.Add(&sp);
    keeper.Add(&ad);
    keeper.Add(&pr);

    // Отображение всех объектов
    keeper.ShowAll();

    std::cout << "\nProgram finished.\n";
    return 0;
}
