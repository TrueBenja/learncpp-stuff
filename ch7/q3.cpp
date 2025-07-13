#include <iostream>

static int s_Accumulated{};

int accumulate(int value)
{
    s_Accumulated += value;
    return s_Accumulated;
}

int main()
{
    std::cout << accumulate(4) << '\n';
    std::cout << accumulate(3) << '\n';
    std::cout << accumulate(2) << '\n';
    std::cout << accumulate(1) << '\n';
}
