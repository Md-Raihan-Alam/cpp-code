#include<iostream>
#include<conio.h>
int main()
{
	int num=65;
	/*
	decltype is a way to specify a type: You give it an expression,
	and decltype gives you back a type which corresponds to the type of the expression.
	*/
	decltype(num) random=4545;
	std::cout<<"random will take what \'num\' data type is! Random="<<random<<std::endl;
	getch();
}
