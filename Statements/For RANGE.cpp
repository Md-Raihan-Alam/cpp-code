#include<iostream>
#include<conio.h>
#include<vector>
#include<array>
int main()
{
	int data[]={1,2,3,4,5,6};
	//for(data type var: from which var)
	for(int i:data)
	{
		std::cout<<i<<" ";
	}
	std::cout<<"\n";
	std::vector<int> data2={11,22,33,44,55,66};
	for(int i:data2)
	{
		std::cout<<i<<" ";
	}
    std::cout<<"\n";
	std::array<int,6> data3={111,222,333,444,555,666};
	for(int i:data3)
	{
		std::cout<<i<<" ";
	}
	getch();
}
