#include <bitset>
#include <iostream>
#include <print>

std::bitset<4> rotl(std::bitset<4> bits)
{
    std::bitset<4> temp{bits};
    bits <<= 1;
    //    bits.set(0, temp.test(3));
    bits[0] = temp[3];
    return bits;
}

std::bitset<4> bitwiserotl(std::bitset<4> bits)
{
    // std::bitset<4> temp{bits};
    // bits &= 0b1000;
    // bits >>= 3;
    // temp <<= 1;
    // temp |= bits;

    // return temp;
    return (bits << 1) | (bits >> 3);
}

int main()
{
    std::bitset<4> bitset1{0b0001};
    std::bitset<4> bitset2{0b1001};
    std::cout << bitwiserotl(bitset1) << std::endl;
    std::cout << bitwiserotl(bitset2) << std::endl;
}
