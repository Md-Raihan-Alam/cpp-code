#include<iostream>
using namespace std;
void printArray(int** A,int m,int n)
{
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
            cout<<A[i][j]<<" ";
        cout<<endl;
    }
}
int main()
{
    int a,b;
    cin>>a>>b;
    //to create
    int **arr=new int*[a];
    for(int i=0;i<a;i++)
        arr[i]=new int[b];
    for(int i=0;i<a;i++)
        for(int j=0;j<b;j++)
            cin>>arr[i][j];
    // for(int i=0;i<a;i++)
    // {
    //     for(int j=0;j<b;j++)
    //         cout<<arr[i][j]<<" ";
    //     cout<<endl;
    // }
    printArray(arr,a,b);
    //to delete
    for(int i=0;i<a;i++)
        delete [] arr[i];
    delete [] arr;
    return 0;
}