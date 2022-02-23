#include<iostream>
class AbstractEmployee
{
   virtual void AskForPromotion()=0;
};
class Employee:AbstractEmployee
{
private:
    std::string Name;
    std::string Company;
    int Age;
public:
    void setName(std::string name)
    {
        Name=name;
    }
    std::string getName(){
        return Name;
    }
    void setCompany(std::string company){
        Company=company;
    }
    std::string getCompany(){
        return Company;
    }
    void setAge(int age)
    {
        if(age>=18)
        Age=age;
    }
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
        void AskForPromotion(){
        if(Age>30){
            std::cout<<Name<<" got promoted!"<<std::endl;
        }else{
            std::cout<<Name<<", sorry NO promotion for you!"<<std::endl;
        }
    }
};
int main()
{
    Employee emp1=Employee("Md. Raihan Alam","Google",35);
    Employee emp2=Employee("Arnob Borua","XXX",26);
    emp1.AskForPromotion();
    emp2.AskForPromotion();
    return 0;
}
