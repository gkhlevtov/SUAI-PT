#include <iostream>
#include <limits>
#include "include/filetask.h"

int readInt(const std::string &prompt)
{
    int value;
    while (true)
    {
        std::cout << prompt;
        if (std::cin >> value)
        {
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            return value;
        }
        else
        {
            std::cout << "Invalid input. Try again.\n";
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }
    }
}

int main()
{
    bool running = true;

    while (running)
    {
        std::cout << "\n=== Menu ===\n";
        std::cout << "1. Task 1\n";
        std::cout << "2. Task 2\n";
        std::cout << "3. Exit\n";

        int choice = readInt("\nSelect an option: ");

        switch (choice)
        {
        case 1:
            std::cout << "\n=== Task 1 STUB ===\n";
            std::cout << "NOT READY.\n\n";
            break;

        case 2:
        {
            bool subRunning = true;
            while (subRunning)
            {
                std::cout << "\n=== Task 2: File Processing ===\n";
                std::cout << "1. Process file\n";
                std::cout << "2. Return to main menu\n";

                int subChoice = readInt("\nSelect an option: ");

                switch (subChoice)
                {
                case 1:
                    runFileTask();
                    break;

                case 2:
                    subRunning = false;
                    break;

                default:
                    std::cout << "Invalid option. Try again.\n";
                }
            }
            break;
        }
        case 3:
            running = false;
            break;

        default:
            std::cout << "Invalid option. Try again.\n";
        }
    }

    std::cout << "\nProgram finished.\n";
    return 0;
}
