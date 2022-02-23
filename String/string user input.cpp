#include<iostream>
#include<string>
#include<conio.h>
int main()
{
	std::string greeting;
	std::cout<<"Enter a string:"<<std::endl;
	/*std::cin>>greeting  not recomended 1. it won't take anything after space
	  str::cin>>left_over; will take after anything space
	  */
	getline(std::cin,greeting);
	//std::cin.getline(); for numbers
	std::cout<<"You entered "<<greeting<<std::endl;
	getch();
}
