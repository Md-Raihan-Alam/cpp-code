#include<iostream>
#include<conio.h>
//function overloading, multiple functions can have the same name with different parameters
int plusFunc(int x, int y) {
  return x + y;
}

double plusFunc(double x, double y) {
  return x + y;
}
int main()
{
	std::cout<<"Sum of Int "<<plusFunc(8, 5)<<std::endl;
	std::cout<<"Sum of Float "<<plusFunc(4.3, 6.26);
	getch();
}
