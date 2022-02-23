#include<iostream>
///1st way
const int c=2;
void twoDarray(int arr[][c],int r){
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            std::cout<<arr[i][j]<<" ";
        }
        std::cout<<std::endl;
    }
}
///2nd way
void twoDArrayPas(int *arr,int r,int c){
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            std::cout<<*(arr+i*c+j)<<" ";
        }
        std::cout<<std::endl;
    }
}
int main()
{
    int arr[2][2]={
        {1,2},{3,4}
    };
    twoDarray(arr,2);
    std::cout<<std::endl;
    twoDArrayPas((int*)arr,2,2);
    return 0;
}
