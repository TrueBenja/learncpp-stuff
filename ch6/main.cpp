#include <iostream>
#include <print>
#include <string_view>

std::string_view getQuantityPhrase(int quantity)
{
    if (quantity < 0)
        return "negative";
    else if (quantity == 0)
        return "no";
    else if (quantity == 1)
        return "a single";
    else if (quantity == 2)
        return "a couple of";
    else if (quantity == 3)
        return "a few";
    else
        return "many";
}

std::string_view getApplesPluralized(int quantity)
{
    return (quantity == 1) ? "apple" : "apples";
}

int main()
{
    constexpr int maryApples{3};
    std::println("Mary has {} {}.", getQuantityPhrase(maryApples), getApplesPluralized(maryApples));

    std::print("How many apples do you have? ");
    int numApples{};
    std::cin >> numApples;

    std::println("You have {} {}", getQuantityPhrase(numApples), getApplesPluralized(numApples));
}
