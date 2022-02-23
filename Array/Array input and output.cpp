#include<iostream>
#include<conio.h>
int main()
{
	int nums[5];
	for(int i=0;i<5;i++)
	{
		std::cout<<"Number "<<i+1<<":";
		std::cin>>nums[i];
	}
	std::cout<<"\n";
	for(int i=0;i<5;i++)
	{
		std::cout<<"Number "<<i+1<<"="<<nums[i]<<std::endl;
	}
	getch();
}
