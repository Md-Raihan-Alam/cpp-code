#include<iostream>
#include<string>
#include<conio.h>
int main()
{
	int guesses[8]={32,52,4,85,14,25,36,54};
	std::cout<<guesses[3]<<std::endl;
	/*Length of array-1*/
	std::cout<<"Size of array is "<<sizeof(guesses)/sizeof(guesses[0])<<std::endl;
	guesses[3]=3000;
	std::cout<<"Enter a number:";
	std::cin>>guesses[7];
	std::cout<<guesses[3]<<std::endl;
	std::cout<<"You have entered "<<guesses[7];
	getch();
}
