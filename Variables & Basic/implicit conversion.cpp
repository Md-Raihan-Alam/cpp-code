#include<iostream>
#include<conio.h>
int main()
{
	int num_int=9;
	double num_double;
	num_double=num_int;//implicit conversion //assigning one value to another type variable
	std::cout<<"num_int="<<num_int<<std::endl;
	std::cout<<"num_double="<<num_double<<std::endl;
	getch();
}
