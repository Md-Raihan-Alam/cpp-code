#include<iostream>
#include<conio.h>
int main()
{
	int i=0;
	loop:
		std::cout<<i<<" ";
		i++;
	if (i<=10) goto loop;
	getch();
}
