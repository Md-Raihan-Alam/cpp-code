#include <iostream>
int main()
{
    const int &x = 100; /// This is valid
    std::cout << x;
    return 0;
}