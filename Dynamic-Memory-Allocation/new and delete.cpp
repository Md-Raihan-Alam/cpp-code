#include <iostream>
int main()
{
    int *p;
    p = new int; /// allocate room for an integer
    if (!p)
    {
        std::cout << "Allocation error\n";
        return 1;
    }
    *p = 1000;
    std::cout << "Here is integer at p:" << *p << std::endl;
    delete p; /// release memory
    return 0;
}