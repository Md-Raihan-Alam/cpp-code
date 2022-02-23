#include<iostream>
#include<conio.h>
void print_array(int array[],int size)
{
	for(int i=0;i<size;i++)
	{
		std::cout<<array[i]<<" ";
	}
}
int main()
{
	int nums[]={32,12,54,87,54};
	int size=sizeof(nums)/sizeof(int);
	print_array(nums,size);
	getch();
}
