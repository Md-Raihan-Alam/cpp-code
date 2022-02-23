#include<iostream>
#include<conio.h>
int main()
{
	int guesses[]={12,32,43,123,43};
	int size=sizeof(guesses)/sizeof(int);
	for(int i=0;i<size;i++)
	{
		std::cout<<guesses[i]<<" ";
	}
	getch();
}
