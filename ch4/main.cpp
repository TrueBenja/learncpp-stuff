#include <iostream>
#include <print>

double getValue()
{
    std::print("Enter a double value: ");
    double value{};
    std::cin >> value;
    return value;
}

char getOperation()
{
    std::print("Enter +, -, *, or /: ");
    char op{};
    std::cin >> op;
    return op;
}

int main()
{
    double x{getValue()};
    double y{getValue()};

    char op{getOperation()};

    double result{};

    if (op == '+')
    {
        result = x + y;
    }
    else if (op == '-')
    {
        result = x - y;
    }
    else if (op == '*')
    {
        result = x * y;
    }
    else if (op == '/')
    {
        result = x / y;
    }
    else
    {
        return -1;
    }

    std::println("{} {} {} is {}", x, op, y, result);
}
