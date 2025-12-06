#include "../include/utils.h"
#include <cctype>

// Приведение к нижнему регистру
std::string toLower(const std::string &s)
{
    std::string result = s;
    for (char &c : result)
    {
        c = std::tolower(c);
    }
    return result;
}