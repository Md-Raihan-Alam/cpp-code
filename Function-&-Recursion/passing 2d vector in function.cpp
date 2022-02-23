#include<iostream>
#include<vector>
int printMatrix(std::vector<std::vector<int> > &matrix)
{
    for(std::vector<int> number:matrix){
        for(int i:number){
            std::cout<<i<<" ";
        }
        std::cout<<std::endl;
    }
    return 0;
}
int main()
{
    std::vector<std::vector<int>> num=
    {
        {1,2,3},
        {4,5,6}
    };
    printMatrix(num);
    return 0;
}
