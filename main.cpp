#include <cassert>
#include <iostream>

int main()
{
    [[maybe_unused]] bool success{false};
    assert(success && "Success failed");
}
