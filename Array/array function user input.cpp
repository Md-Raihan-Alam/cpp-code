#include<iostream>
#include<limits>
#include<conio.h>
void print_array(int array[],int size)
{
	for(int  i=0;i<size;i++)
	{
		std::cout<<array[i]<<" ";
	}
}
int main()
{
	const int SIZE=100;
	int nums[SIZE];
	int count=0;
	std::cout<<"Enter numbers for array:"<<std::endl;
	for(int i=0;i<SIZE;i++)
	{
		if(std::cin>>nums[i])
		{
				count++;
		}
		else
		{
			break;
        }
	}
		print_array(nums,count);
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
	getch();
}
