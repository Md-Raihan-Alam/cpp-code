#include<iostream>
class classDate{
    int day,month,year;
public:
    classDate(std::string date);
    classDate(int x,int y,int z){ day=x;month=y;year=z;}
    void show(){
        std::cout<<month<<"/"<<day<<"/"<<year<<std::endl;
    }
};
classDate::classDate(std::string date){
    std::cout<<date<<std::endl;
}
int main()
{
    classDate date("12/02/2022");
    classDate datetwo(27,2,2022);
    datetwo.show();
    return 0;
}