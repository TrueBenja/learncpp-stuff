#include <iostream>
#include <print>
#include <cstdint>
#include <cmath>

void fizzbuzz(int max)
{
    for (int i{1}; i <= max; ++i)
    {
        bool printed{false};

        if (i % 3 == 0)
        {
            std::cout << "fizz";
            printed = true;
        }
        if (i % 5 == 0)
        {
            std::cout << "buzz";
            printed = true;
        }
        if (i % 7 == 0)
        {
            std::cout << "pop";
            printed = true;
        }
        if (!printed)
        {
            std::cout << i;
        }
        std::cout << '\n';
    }
}

int main()
{
    fizzbuzz(150);
}
