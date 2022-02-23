#include<iostream>
#include<conio.h>
int main()
{
	int a=3;
	int *b=&a;
	std::cout<<"The address of b is "<<b<<std::endl;//address
	std::cout<<"The address of a is "<<&a<<std::endl;
	std::cout<<"The value at address b is "<<*b<<std::endl;
	std::cout<<"The value a is "<<a<<std::endl;
	/*pointer to pointer*/
	int **c=&b;
	std::cout<<"The address of c is "<<c<<std::endl;//address
	std::cout<<"The address of b is "<<&b<<std::endl;
	std::cout<<"The value at address c is "<<*c<<std::endl;
	std::cout<<"The value of a is "<<a<<std::endl;
	std::cout<<"The value at address value_at(value_at(c)) is "<<**c<<std::endl;
	getch();
}
