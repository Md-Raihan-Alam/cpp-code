#include<iostream>
#include<conio.h>
int main()
{
    /*Better to use for object type. Check advance*/
	int num1,num2;
	try{
        std::cout<<"Enter 1st number:";
		std::cin>>num1;
		std::cout<<"Enter 2nd number:";
		std::cin>>num2;
		if(num2==0)
		{
			throw -1;//throw (variable)
		}
		double result=(double)(num1/num2);
		std::cout<<"Result:"<<result<<std::endl;
	}
	catch(int x)
	{
		std::cout<<"Error "<<std::endl;
    }
	getch();
}
