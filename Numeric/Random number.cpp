#include<iostream>
#include<stdlib.h>
#include<conio.h>
int main()
{
	int number;
	int i;
	/*
	without srand rand will repeat same number over and over again
	*/
	srand(time(0));
	for(int i=0;i<10;i++)
	{
		/*
		rand(); will create any random number without any limit
		rand()% 'num';will create any random number  within 'num'
		(rand()%num)+num2; will add num2 with the random number
		*/
		number=rand()%100;
		std::cout<<number<<" ";

	}
	getch();
}
