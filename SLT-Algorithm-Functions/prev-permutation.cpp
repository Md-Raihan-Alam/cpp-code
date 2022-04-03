#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int arr[]={1,2,3};
    sort(arr,arr+3);
    reverse(arr,arr+3);
    cout<<"The 3! possible permutation with 3 elmeents:\n";
    do{
        cout<<arr[0]<<" "<<arr[1]<<" "<<arr[2]<<endl;
    }while(prev_permutation(arr,arr+3));
    cout<<"After loop: "<<arr[0]<<" "<<arr[1]<<" "<<arr[2]<<endl;
    return 0;
}