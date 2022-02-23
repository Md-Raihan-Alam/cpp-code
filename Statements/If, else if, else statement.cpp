#include<iostream>
#include<conio.h>
int main()
{
	auto age=32;
	if(age<18) std::cout<<"Underage";
	else if (age==18) std::cout<<"Perfect age";
	else if (age>18 && age<50) std::cout<<"Adult";
    else std::cout<<"Old";
	getch();
}
