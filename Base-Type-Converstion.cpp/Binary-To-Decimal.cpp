#include<iostream>
#include<string>
#include<algorithm>
#include<cmath>
using namespace std;
int main()
{
    unsigned long long decimalNumber=0;
    string binary;
    cin>>binary;
    reverse(binary.begin(),binary.end());
    int size=binary.size();
    for(int i=0;i<size;i++)
    {
        if(binary[i]=='1')
        {
            decimalNumber+=pow(2,i);
        }
    }
    cout<<"Decimal Number is "<<decimalNumber<<endl;
}