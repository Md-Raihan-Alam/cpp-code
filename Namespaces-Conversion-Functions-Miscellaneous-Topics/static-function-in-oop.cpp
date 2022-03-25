#include<iostream>
class Employee{
private:
    int id;
    ///static data member
    static int total;///static ; can't set value here
public:
    void setData(void){
        std::cout<<"Enter the id:"<<std::endl;
        std::cin>>id;
        total++;
    }
    void getData(void){
        std::cout<<"The id of the employee is "<<id<<" and this is employee number "<<total<<std::endl;
    }
    ///static data method; only static data can be use here
    static void getCount(std::string name="unknown"){
        ///std::cout<<id; throw error
        std::cout<<"The value of total is "<<total<<" Name is "<<name<<std::endl;
    }
};
int Employee::total=10;///static; but you can do here
int main()
{
    Employee A,B,C;
    A.setData();
    A.getData();
    Employee::getCount("Md. Raihan Alam");
    B.setData();
    B.getData();
    Employee::getCount();
    C.setData();
    C.getData();
    Employee::getCount();
    return 0;
}
