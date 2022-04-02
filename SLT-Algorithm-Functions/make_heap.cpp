#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    //initializing vector;
    vector<int> vi={3,6,7,8,11,4};
    //using make_heap() to transform vector into a max heap
    make_heap(vi.begin(),vi.end());
    /* For minimum heap
    make_heap(vi.begin(),vi.end(), greaters()); 
    */
    //checking if heap using front() function
    cout<<"The maximum element of heap is: ";
    cout<<vi.front()<<endl;
    return 0;
}