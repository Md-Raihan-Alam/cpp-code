#include<iostream>
#include<conio.h>
int main()
{
	char c;
	std::cout<<"Enter a character:";
	std::cin>>c;
	switch(c){
		case 'a':
			std::cout<<"Vowel";
			break;
		case 'e':
			std::cout<<"Vowel";
			break;
		case 'i':
			std::cout<<"Vowel";
			break;
		case 'o':
			std::cout<<"Vowel";
			break;
		case 'u':
			std::cout<<"Vowel";
			break;
		default:
			std::cout<<"Not a vowel";
			break;
	}
	getch();
}
