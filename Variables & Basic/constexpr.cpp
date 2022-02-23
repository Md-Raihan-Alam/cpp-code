#include<iostream>
#include<conio.h>
int main()
{
	/*
    A constant expression is an expression whose value cannot change
and that can be evaluated at compile time.
	*/
	constexpr int mf=20;
	std::cout<<mf<<std::endl;
	constexpr int limit=mf+1;
	std::cout<<limit<<std::endl;
	getch();
}
