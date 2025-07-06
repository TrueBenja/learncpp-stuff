#include <iomanip>
#include <iostream>
#include <print>

double getHeight()
{
    std::print("Enter the height of the tower in meters: ");
    double height{};
    std::cin >> height;
    return height;
}

void printHeightAtIntervals(double height)
{
    int seconds{};
    double fallen{};
    std::cout << std::setprecision(5);
    while (height > fallen)
    {
        fallen = 9.8 * seconds * seconds / 2;
        if (fallen < height)
        {
            std::cout << "At " << seconds << " seconds, the ball is at height " << height - fallen << " meters\n";
        }
        else
        {
            std::println("At {} seconds, the ball is on the ground", seconds);
        }

        seconds++;
    }
}

int main()
{
    double height{getHeight()};
    printHeightAtIntervals(height);
}
