#include<iostream>
void date(char *date);///date as string
void date(int month,int day,int year);///date as numbers
int main()
{
    date("2/14/2022");
    date(2,24,2002);
    return 0;
}
void date(char *date)
{
    std::cout<<date<<std::endl;
}
void date(int month,int day,int year)
{
    std::cout<<month<<"/"<<day<<"/"<<year<<std::endl;
}
