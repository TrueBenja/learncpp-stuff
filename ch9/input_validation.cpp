#include <iostream>
#include <limits>
#include <print>

void ignoreLine()
{
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

bool hasUnextractedInput()
{
    return !std::cin.eof() && std::cin.peek() != '\n';
}

bool clearFailedExtraction()
{
    if (!std::cin)
    {
        if (std::cin.eof())
        {
            std::exit(0);
        }

        std::cin.clear();
        ignoreLine();
        return true;
    }
    return false;
}

double getDoubleAlt()
{
    while (true)
    {
        std::cout << "Enter a decimal number: ";
        double x{};
        std::cin >> x;

        if (hasUnextractedInput())
        {
            std::println("Invalid input. Try again. ");
            ignoreLine();
            continue;
        }

        return x;
    }
}

double getDouble()
{
    while (true)
    {
        std::cout << "Enter a decimal number: ";
        double x{};
        std::cin >> x;
        if (clearFailedExtraction())
        {
            std::println("Invalid input. Try again. ");
            continue;
        }

        if (!std::cin)
        {
            std::cin.clear();
            ignoreLine();
            continue;
        }

        ignoreLine();
        return x;
    }
}

char getOperator()
{
    while (true)
    {
        std::cout << "Enter one of the following: +, -, *, or /: ";
        char op{};
        std::cin >> op;

        if (clearFailedExtraction())
        {
            std::println("Invalid input. Try again. ");
            continue;
        }

        switch (op)
        {
        case '+':
        case '-':
        case '*':
        case '/':
            return op;
        default:
            std::println("Invalid operator. Try again. ");
        }
    }
}

void printResult(double x, char operation, double y)
{
    double result{0.0};

    switch (operation)
    {
    case '+':
        result = x + y;
        break;
    case '-':
        result = x - y;
        break;
    case '*':
        result = x * y;
        break;
    case '/':
        result = x / y;
    }

    std::println("{} {} {} = {}", x, operation, y, result);
}

int main()
{
    double x{getDouble()};
    char operation{getOperator()};
    double y{getDouble()};

    while (operation == '/' && y == 0.0)
    {
        std::println("Cannot divide by zero.");
        y = getDouble();
    }

    printResult(x, operation, y);
}
