#include<iostream>
#include<conio.h>
int main()
{
	for(int i=0;i<=10;i++) std::cout<<i<<" ";
	std::cout<<"\n";
	int j=11;
	while(j<=20){
		std::cout<<j<<" ";
		j++;
	}
	std::cout<<"\n";
	int k=21;
	do{
		std::cout<<k<<" ";
		k++;
	}while(k<=30);
	getch();
}
