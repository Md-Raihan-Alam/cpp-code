#include<iostream>
#include<conio.h>
int main()
{
	int i=14;
	int &r=i;//int &r; will be error
	std::cout<<"Value of i="<<i<<std::endl;
	std::cout<<"Valur of reference r="<<r<<std::endl;
	getch();
}

