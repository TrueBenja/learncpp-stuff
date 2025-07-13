#include <iostream>
#include <print>
#include <cstdint>
#include "constants.h"

int main()
{
    std::cout << "How many students are in your class? ";
    int students{};
    std::cin >> students;

    if (students > Constants::maxClassSize)
        std::cout << "There are too many students in this class.\n";
    else
        std::cout << "This class isn't too large.\n";

    return 0;
}
