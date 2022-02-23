#include<iostream>
#include<string>
class Employee{//parent class
private:
    int regsId;
    int ID;
protected:
    /***
    Protected attribute are for inheritance classs
    ***/
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
};
/***This is how you declare inheritance class***/
/***
class Developer:Employee ---> It will make the Employee attributes private by default, to fix this problem declare like below
***/
class Developer:public Employee
{
public:
    std::string favProgLang;
    /***
    This is how you work with inheritance construction
    ***/
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
};
int main()
{
    Employee emp1("Md. Raihan Alam"," FANG ",21);
    emp1.setId(101);
    emp1.getId();
    Developer dev("Md. Raihan Alam", " FANG ",21,"JavaScript");
    dev.bugFix("C++");
    dev.setReligion("Islam");
    std::cout<<emp1.getName()<<" Religion is "<<dev.getReligion()<<std::endl;
    dev.setId(451);
    dev.getId();
    SeniorDev senDev("Raihan","Google",21,"C++");
    senDev.giveAssignment();
    senDev.setId(551);
    senDev.getId();
    return 0;
}
