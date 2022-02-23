#include<iostream>
#include<string>
#include<conio.h>
int main()
{
	int grade=95;
	std::string finalgrade = (grade < 60) ? "fail" : "pass";
	std::cout<<finalgrade<<std::endl;
	std::string finalgradeTwo = (grade > 90) ? "high pass"
											: (grade < 60) ? "fail" : "pass";	std::cout<<finalgradeTwo<<std::endl;
	getch();
}
