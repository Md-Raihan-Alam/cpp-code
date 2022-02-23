#include<iostream>
#include<conio.h>
int sum(int a=0,int b=0)
{
	return a+b;
}
int main()
{
	std::cout<<"Default value "<<sum();
	getch();
}
