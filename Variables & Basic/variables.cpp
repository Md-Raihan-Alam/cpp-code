#include<iostream>
#include<conio.h>
float PI=3.1416;//global scope
int main()
{
	float g=9.8;//local scope
	std::cout<<g<<" "<<PI<<std::endl;
	getch();
}

