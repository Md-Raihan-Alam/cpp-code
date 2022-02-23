#include<iostream>
#include<conio.h>
int main()
{
	int i=56;
	char c='P';
	float f=36325.3252;
	std::cout<<"Sizeof operators return the byte of type"<<std::endl;
    std::cout<<"Integer="<<sizeof(i)<<" Character="<<sizeof(c)<<" Floating="<<sizeof(f)<<std::endl;
	getch();
}
