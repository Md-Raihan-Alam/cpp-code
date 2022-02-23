#include<iostream>
#include<string>
class Employee{
private:
    int regsId;
    int ID;
protected:
    std::string religion;
public:
    std::string Name;
    std::string Company;
    int Age;
    int setId(int empId){
        ID=empId;
    }
    void getId(){
        std::cout<<"ID is "<<ID<<std::endl;
    }
    std::string getName()
    {
        return Name;
    }
    Employee(std::string name,std::string company,int age)
    {
        Name=name;
        Company=company;
        Age=age;
        std::cout<<"Name is "<<name<<"| Company is "<<Company<<"| Age is "<<Age<<std::endl;
    }
    virtual void Work(){
        std::cout<<getName()<<" is checking email, assigning work and submitting papers"<<std::endl;
    }
};
class Developer:public Employee
{
public:
    std::string favProgLang;
    Developer(std::string name,std::string company,int age,std::string FavProgLang):Employee(name,company,age)
    {
        favProgLang=FavProgLang;
        std::cout<<"Best Programing Skill is "<<favProgLang<<std::endl;
    }
    void bugFix(std::string anotherLanguage)
    {
        std::cout<<getName()<<" has another job and that is to fix bugs using "<<anotherLanguage<<std::endl;
    }
    void setReligion(std::string rel)
    {
        religion=rel;
    }
    std::string getReligion()
    {
        return religion;
    }
    void Work(){
        std::cout<<getName()<<" is analyzing the github repository submitted by his senior"<<std::endl;
    }
};
class SeniorDev:public Employee
{
    public:
    std::string lang;
    SeniorDev(std::string name,std::string company,int age,std::string currentLang):Employee(name,company,age)
    {
        lang=currentLang;
    }
     void giveAssignment()
    {
        std::cout<<Name<<" is preparing new assignments for junior developers who are skilled in "<<lang<<std::endl;
    }
    void Work(){
        std::cout<<getName()<<" is writing code by using "<<lang<<std::endl;
    }
};
int main()
{
    /***
    The most common use of polymorphism is when a
    parent class reference is used to refer to a child class object
    ***/
    Developer d("Alcurd Shank","FANG",25,"JavaScript");
    SeniorDev sd("Md. Raihan Alam","Google",29,"C++");
    d.Work();
    sd.Work();
    std::cout<<"\n";
    /*** POLYMORPHISM ***/
    Employee *e1=&d;
    Employee *e2=&sd;
    e1->Work();
    e2->Work();
    return 0;
}
