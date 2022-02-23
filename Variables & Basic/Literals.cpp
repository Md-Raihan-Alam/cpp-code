#include<iostream>
#include<conio.h>
int main()
{

	/*
	Integer Literals
	*/
	std::cout<<077<<std::endl;
	std::cout<<215u<<std::endl;
	//std::cout<<0328<<std::endl;illegal * is not an octal digits
	/*Floating-point Literals*/
	std::cout<<3.2514E-5L<<std::endl;
	//std::cout<<.e55<<std::endl;//missing integer or fraction
	/*Boolean LIterals*/
	std::cout<<true<<std::endl;
	/*character Literals*/

	std::cout<<"Hello\tWorld\n\n"<<std::endl;
	getch();
}
