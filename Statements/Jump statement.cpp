#include<iostream>
#include<conio.h>
int main()
{
	for(int i=0;i<10;i++){
		if(i==5) break;
		std::cout<<i<<" ";
	}
    std::cout<<"\n";
	for(int i=11;i<=20;i++){
		if(i%2==0) continue;
		std::cout<<i<<" ";
	}
	getch();
}
