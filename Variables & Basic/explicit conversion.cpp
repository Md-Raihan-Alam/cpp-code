#include<iostream>
#include<conio.h>
int main()
{
    /*Type Casting*/
	double num_double=3.76;
	std::cout<<"num_double="<<num_double<<std::endl;
	//C-style conversion
	int num_int1=(int)num_double;
	std::cout<<"num_int1="<<num_int1<<std::endl;
	//functon style conversion
	int num_int2=int(num_double);
	std::cout<<"num_int2="<<num_int2<<std::endl;
	getch();
}
