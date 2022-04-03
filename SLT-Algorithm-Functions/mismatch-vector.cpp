// C++ code to demonstrate the working of
// mismatch( start_iter1, end_iter1, start_iter2, comparator )
  
#include<iostream>
#include<algorithm> 
#include<vector>
using namespace std;
  
// comparator function
// returns true when element from 
// 1st element is greater than 2nd
bool compare(int a, int b)
{   
    return (a>b);
}
  
int main()
{
      
    // initializing vectors
    vector<int> v1 = { 23, 13, 15, 20 };
    vector<int> v2 = { 1, 10, 25, 30, 45 };
    vector<int> v3 = { 12, 100, 152, 204 };
    vector<int> v4 = { 1, 10, 15, 20, 24 };
      
    // declaring pointer pair
    pair< vector<int>::iterator,
    vector<int>::iterator > mispair;
      
    // using mismatch() to search for 1st mismatch
    mispair = mismatch(v1.begin(), v1.end(), v2.begin(), compare);
      
    // printing the mismatch pair
    // 1st mismatch at 15 and 25
    // 15 is 1st element less than 2nd at same position
    cout << "The 1st mismatch element of 1st container : ";
    cout << *mispair.first << endl;
      
    cout << "The 1st mismatch element of 2nd container : ";
    cout << *mispair.second << endl;
      
    // using mismatch() to search for 1st mismatch
    mispair = mismatch(v3.begin(), v3.end(), v4.begin(), compare);
      
    // printing the mismatch pair
    // no mismatch
    // all elements in 1st container are greater than 2nd
    // points to position after last 0 and corresponding 24
    cout << "The returned value from 1st container is  : ";
    cout << *mispair.first << endl;
      
    cout << "The returned value from 2nd container is  : ";
    cout << *mispair.second << endl;
      
}