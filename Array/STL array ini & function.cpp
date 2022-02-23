#include<iostream>
#include<array>
#include<conio.h>
void print_stl_array(std::array<int,5> data,int size)
{
	//for(int i=0;i<data.size();i++)//data size=stl array length
	for(int i=0;i<size;i++)
	{
		std::cout<<data[i]<<" ";
    }
}
int main()
{
	std::array<int,5> data={1,2,3,4,5};
	print_stl_array(data,3);
	getch();
}
