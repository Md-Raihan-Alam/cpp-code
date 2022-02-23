#include<iostream>
class Employee
{
public:
    std::string Name;
    std::string Company;
    int Age;
    void statement()
    {
        std::cout<<"Name= "<<Name<<"| Company="<<Company<<"| Age="<<Age<<std::endl;
    }
    //constructor
    Employee(std::string name,std::string company,int age){
        Name=name;
        Company=company;
        Age=age;
    }
};
int main()
{
    Employee emp1=Employee("Md. Raihan Alam","Google",25);
    emp1.statement();
    /*
    means=
    Employee emp1;
    emp1.name="Raihan";
    emp1.company="Google";
    emp1.age=25;
    emp1.statement();
    */
    Employee emp2=Employee("Arnob Borua","XXX",26);
    emp2.statement();
    return 0;
}
