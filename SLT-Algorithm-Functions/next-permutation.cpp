#include<algorithm>
#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,2,3};
    sort(arr,arr);
    cout<<"The 3! possible permuation with 3 elmeents:\n";
    do{
        cout<<arr[0]<<" "<<arr[1]<<" "<<arr[2]<<endl;
    }while(next_permutation(arr,arr+3));
    cout<<"After loop: "<<arr[0]<<" "<<arr[1]<<" "<<arr[2]<<endl;
    return 0;
}