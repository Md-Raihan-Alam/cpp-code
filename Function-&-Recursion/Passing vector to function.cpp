#include<iostream>
#include<vector>
#include<conio.h>
void print_vector(std::vector<int> data)
{
	for(int i=0;i<data.size();i++)
	{
		std::cout<<data[i]<<" ";
	}
}
int main()
{
	std::vector<int> data={1,2,3};
	print_vector(data);
	getch();
}
