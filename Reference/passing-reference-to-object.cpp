#include <iostream>
class myClass
{
    int who;

public:
    myClass(int n)
    {
        who = n;
        std::cout << "Contructing " << who << "\n";
    }
    ~myClass() { std::cout << "Destructing " << who << "\n"; }
    int id() { return who; }
};
/// o is passed by reference
void f(myClass &o)
{
    /// note that . operator is used
    std::cout << "Received " << o.id() << "\n";
}
int main()
{
    myClass x(1);
    f(x);
    return 0;
}