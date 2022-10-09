#include<iostream>
#include<string>
#include<cmath>
using namespace std;
int main()
{
    string hex;
    int sum=0,j=0;
    cin>>hex;
    for(int i=hex.length()-1;i>=0;i--)
    {
        if(hex[i]>='0' && hex[i]<='9')
        {
            sum=sum+((hex[i]-48)*pow(16,j));
            j++;
        }else if(hex[i]>='A' && hex[i]<='F')
        {
            sum=sum+((hex[i]-55)*pow(16,j));
            j++;
        }
    }
    cout<<sum<<endl;
}