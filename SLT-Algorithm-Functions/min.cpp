// C++ program to demonstrate the use of std::min
#include <iostream>
#include <algorithm>
using namespace std;
// Defining the binary function
bool comp(int a, int b)
{
    return (a < b);
}
int main()
{
    int a = 5;
    int b = 7;
    cout << std::min(a, b) << "\n";
    // Returns the first one if both the numbers
    // are same
    cout << std::min(7, 7)<<endl;
    cout << std::min({ 1, 2, 3, 4, 5, 0, -1, 7 }, comp) << "\n";
    return 0;
}