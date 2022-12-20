#include <iostream>
#include <string>
#include <bitset>

int main()
{
    unsigned int decimal = 1024;
    const int n = 8;

    std::string binary = std::bitset<12>(decimal).to_string();

    std::cout << binary << std::endl;        // 01000001

    return 0;
}