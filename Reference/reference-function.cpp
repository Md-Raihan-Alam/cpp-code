#include <iostream>
void swapargs(int &x, int &y);
int main()
{
    int i, j;
    i = 10;
    j = 19;
    std::cout << "i: " << i << ", ";
    std::cout << "j: " << j << "\n ";
    swapargs(i, j);
    std::cout << "After swapping: ";
    std::cout << "i: " << i << ", ";
    std::cout << "j: " << j << "\n";
    return 0;
}
void swapargs(int &x, int &y)
{
    int t;
    t = x;
    x = y;
    y = t;
}