#include<iostream>
#include<conio.h>
struct employee{
  int id;
  float salary;
};
int main()
{
	struct employee emp;
	std::cout<<"Enter employee Id:";
	std::cin>>emp.id;
	std::cout<<"\nEnter employee salary:";
	std::cin>>emp.salary;
	std::cout<<"\nEmployee Id="<<emp.id<<" Employee Salary="<<emp.salary;
	getch();
}
