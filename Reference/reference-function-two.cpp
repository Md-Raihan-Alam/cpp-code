#include <iostream>
#include <cmath>
void roundNum(double &num);
int main()
{
    double i = 100.04;
    std::cout << i << " rounded is ";
    roundNum(i);
    std::cout << i << "\n";
    i = 10.9;
    std::cout << i << " rounded is ";
    roundNum(i);
    std::cout << i << "\n";
    return 0;
}
void roundNum(double &num)
{
    double frac;
    double val;
    /// decompose num into whole and fractionsal parts
    frac = modf(num, &val);
    if (frac < 0.6)
        num = val;
    else
        num = val + 1.0;
}
