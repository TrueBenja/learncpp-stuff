#include <iostream>
#include <print>
#include "Random.h"

bool playHiLo(int min, int max, int guesses)
{
    int answer{Random::get(min, max)};

    for (int i{0}; i < guesses; ++i)
    {
        int guess{};
        std::print("A random number between {} and {} is chosen. Guess which: ", min, max);
        std::cin >> guess;

        if (guess == answer)
        {
            std::println("Congrats! The answer was indeed {}.", answer);
            return true;
        }
        else if (guess < answer)
        {
            std::println("Your guess was too low!");
        }
        else
        {
            std::println("Your guess was too high!");
        }
    }
    std::println("Too many guesses! The answer was {}.", answer);
    return false;
}

bool playAgain()
{
    while (true)
    {
        char ch{};
        std::print("Do you want to play again? (y/n) ");
        std::cin >> ch;

        switch (ch)
        {
        case 'y':
            return true;
        case 'n':
            return false;
        default:
            std::println("Invalid input! Try again.");
        }
    }
}

int main()
{
    int min{};
    int max{};

    std::print("Enter the minimum number: ");
    std::cin >> min;
    std::print("Enter the maximum number: ");
    std::cin >> max;

    constexpr int tries{7};

    do
    {
        playHiLo(min, max, tries);
    } while (playAgain());

    std::println("End of program.");
}
