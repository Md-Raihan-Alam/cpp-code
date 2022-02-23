#include<iostream>
class Employee
{
private:
    std::string Name;
    std::string Company;
    int Age;
public:
    /****
    Basic of encapsulation
    setters=Set the value of private
    getters=show the value of private
    *****/
    //setter
    void setName(std::string name)
    {
        Name=name;
    }
    //getter
    std::string getName(){
        return Name;
    }
    //setter
    void setCompany(std::string company){
        Company=company;
    }
    //getter
    std::string getCompany(){
        return Company;
    }
    //setter
    void setAge(int age)
    {
        if(age>=18)
        Age=age;
    }
    //getter
    int getAge()
    {
        return Age;
    }
    Employee(std::string name,std::string company,int age){
        Name=name;
        Company=company;
        Age=age;
        std::cout<<"Name= "<<Name<<"| Company="<<Company<<"| Age="<<Age<<std::endl;
    }
};
int main()
{
    Employee emp1=Employee("Md. Raihan Alam","Google",25);
    Employee emp2=Employee("Arnob Borua","XXX",26);
    emp1.setAge(39);
    std::cout<<emp1.getName()<<" is "<<emp1.getAge()<<" years old"<<std::endl;
    emp1.setAge(15);
    std::cout<<emp1.getName()<<" is "<<emp1.getAge()<<" years old"<<std::endl;
    return 0;
}
