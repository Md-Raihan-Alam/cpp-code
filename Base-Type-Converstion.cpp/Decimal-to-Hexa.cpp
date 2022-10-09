#include<iostream>
#include<string>
#include<cmath>
using namespace std;
int main()
{
    int num,rem,temp,i,j=0;
    string hexa="";
    cin>>num;
    temp=num;
    while(temp>0)
    {
        rem=temp%16;
        if(rem<10)
            hexa+=(48+rem);
        else
            hexa+=(55+rem);
        j++;
        temp/=16;
    }
    for(i=j-1;i>=0;i--)
    {
        cout<<hexa[i];
    }
    return 0;
}