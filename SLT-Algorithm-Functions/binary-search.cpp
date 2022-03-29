#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    vector<int> arr={10,15,20,25,30,35};
    // initializing vector of integers
    // for multiple occurrences
    vector<int> arr2 = {10, 15, 20, 20, 25, 30, 35};
     
    // initializing vector of integers
    // for no occurrence
    vector<int> arr3 = {10, 15, 25, 30, 35};   
    //using binary search to check if 15 exists
    if(binary_search(arr.begin(),arr.end(),15))
        cout<<"15 exist in vector\n";
    else
        cout<<"15 does not exist\n";
    
     // using lower_bound() to check if 20 exists
    // single occurrence
    // prints 2
    cout << "The position of 20 using lower_bound "
            " (in single occurrence case) : ";
    cout << lower_bound(arr.begin(), arr.end(), 20)
            - arr.begin();
      
    cout << endl;
    //using lower_bound() to check if 20 exists
    //mutiple occurence
    //print 2
    cout<<"The position of 20 using lower_bound (in multiple occurence case): ";
    cout<<lower_bound(arr2.begin(),arr2.end(),20)-arr2.begin();
    cout<<endl;
    //using lower_bound() to check if 20 exists
    //no occurrence
    //prints 2 (index of next higher)
    cout<<"The position of 20 using lower_bound (in no occurrence case): ";
    cout<<lower_bound(arr3.begin(),arr3.end(),20)-arr3.begin()<<endl;
    
    // using upper_bound() to check if 20 exists
    // single occurrence
    // prints 3
    cout << "The position of 20 using upper_bound"
           " (in single occurrence case) : ";
    cout << upper_bound(arr.begin(), arr.end(), 20)
            - arr.begin();
      
    cout << endl;
     
    // using upper_bound() to check if 20 exists
    // multiple occurrence
    // prints 4
    cout << "The position of 20 using upper_bound "
             "(in multiple occurrence case) : ";
    cout << upper_bound(arr2.begin(), arr2.end(), 20)
            - arr2.begin();
      
    cout << endl;
      
    // using upper_bound() to check if 20 exists
    // no occurrence
    // prints 2 ( index of next higher)
    cout << "The position of 20 using upper_bound"
            " (in no occurrence case) : ";
    cout << upper_bound(arr3.begin(), arr3.end(), 20)
           - arr3.begin();
      
    cout << endl;   
    return 0;
}