#include <iostream>
int &f(); /// return a reference
int x;
int main()
{
    f() = 100; ////assign 100 to reference return
    std::cout << x << "\n";
    return 0;
}
/// Return an int reference
int &f()
{
    /**
     Here function f() is declared as returning a reference integer but it does not return global x instead it returns
     global x address;
     local variable x return will cause an error
     **/
    return x; /// returns a reference to x
}