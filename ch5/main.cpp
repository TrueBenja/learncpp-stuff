#include <iostream>
#include <print>
#include <string>
#include <string_view>

std::string getName(int num)
{
    std::string name{};
    std::print("Enter the name of person #{}: ", num);
    std::cin >> name;
    return name;
}

int getAge(std::string_view name)
{
    int age{};
    std::print("Enter the age of {}: ", name);
    std::cin >> age;
    return age;
}

int main()
{
    std::string oldestName{getName(1)};
    std::string youngestName{getName(2)};

    int age1{getAge(oldestName)};

    int age2{getAge(youngestName)};

    if (age2 > age1)
    {
        std::string temp = oldestName;
        oldestName = youngestName;
        youngestName = temp;

        int tempAge = age2;
        age2 = age1;
        age1 = tempAge;
    }

    std::println("{} (age {}) is older than {} (age {})", oldestName, age1, youngestName, age2);
}
