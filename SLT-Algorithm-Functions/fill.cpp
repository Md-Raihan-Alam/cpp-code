#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> vect(8);
    //calling fill to initialize values int he
    //range to 4
    fill(vect.begin()+2,vect.end()-1,4);
    for(auto x:vect) cout<<x<<" ";
    return 0;
}