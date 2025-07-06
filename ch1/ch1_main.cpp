#include <iostream>
#include <print>

int main()
{
    int a{}, b{};
    std::print("Enter an integer: ");
    std::cin >> a;

    std::print("Enter another integer: ");
    std::cin >> b;

    std::println("{} + {} is {}.", a, b, a + b);
    std::println("{} - {} is {}.", a, b, a - b);
}
