#include <iostream>
#include <cmath>

int main()
{
    int x, y;
    std::cout << "What is the base?";
    std::cin >> x;
    std::cout << "what is the exponent?";
    std::cin >> y;
    std::cout << pow(x,y);

    return 0;
}