#include <iostream>
void f(int &n); /// declare a reference pareameter
int main()
{
    int i = 0;
    f(i);
    std::cout << "Here is i's new value: " << i << "\n";
    return 0;
}
/// f() now uses a reference parameter
void f(int &n)
{
    /// notice that no * is needed in the following statement
    n = 1000; /// put 1000 into the argument used to call f()
}