#include "io.h"
#include <iostream>
#include <print>

int readNumber()
{
    std::print("Enter an integer: ");
    int x{};
    std::cin >> x;
    return x;
}

void writeAnswer(int answer)
{
    std::println("The answer is: {}", answer);
}
