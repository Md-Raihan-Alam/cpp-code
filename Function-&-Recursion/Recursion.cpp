#include<iostream>
#include<conio.h>
int total=1;
int fact(int i)
{
    //Recursion
	if(i>0){
		total=total*i;
		i--;
		fact(i);
	}
	return total;
}
int main()
{
	std::cout<<"Factorial of 5 is "<<fact(5);
	getch();
}
