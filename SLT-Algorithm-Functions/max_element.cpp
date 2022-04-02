#include<iostream>
#include<algorithm>
using namespace std;
bool comp(int a,int b)
{
    return a<b;
}
int main()
{
    int v[]={'a','c','k','d','e','f','h'};
    int v2[]={9,4,7,2,5,10,11,12,1,3,6};
    //Finding the maximum value between the first and the fourth element
    int* il;
    int* il2;
    il=max_element(v,v+4);
    cout<<char(*il)<<endl;
    il2=max_element(v2+2,v2+9,comp);
    cout<<*il2<<endl;
    return 0;
}