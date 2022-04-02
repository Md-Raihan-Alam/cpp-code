#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    //initializing vector;
    //initial job priorities
    vector<int> vi={15,6,9,11,19};
    //No. of incoming jobs
    int k=3;
    //using make_heap to transfrm into a max heap
    make_heap(vi.begin(),vi.end());
    //initializing job variable
    int a=10;
    for(int i=0;i<k;i++){
        //push a job with priority level
        vi.push_back(a);
        //transform into heap(using push_heap())
        push_heap(vi.begin(),vi.end());
        //checking top priority job front() function
        cout<<"Job with maximum priority is: ";
        cout<<vi.front()<<endl;
        //increasing job priority level
        a=a+10;
    }
}