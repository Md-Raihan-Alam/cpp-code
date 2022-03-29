#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<list>
using namespace std;
int main()
{
    vector<int> vec={1,2,3,4,5,6,7,8,9};
    vector<int> vec2={1,2,3,4,5,6,7,8,9};
    string str="abcdefghijklmnopqrstuvwxyz";
    string strTwo="abcdefghijklmnopqrstuvwxyz";
    for(auto x:vec) cout<<x<<" ";
    //vector-beginning,how-many-shift,vector-end
    //left
    rotate(vec.begin(),vec.begin()+1,vec.end());
    for(auto x:vec) cout<<x<<" ";
    cout<<endl;
    //right
    rotate(vec2.begin(),vec2.begin()+vec2.size()-1,vec2.end());
    for(auto x:vec2) cout<<x<<" ";
    cout<<endl;
    //string-begining,how-many-shift,string-end
    rotate(str.begin(),str.begin()+1,str.end());
    cout<<"After rotate="<<str<<endl;
    //right
    rotate(strTwo.begin(),strTwo.begin()+strTwo.size()-1,strTwo.end());
    cout<<"After rotate to right="<<strTwo<<endl;
    return 0;
}