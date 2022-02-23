#include<iostream>
class Employee{
    //all attribute are private default
    //private:-can't access; can only be access by  member functions or the friend functions
    private:
        long int AccessNo=232314;
        long int ID=10012;
    //protected:-can't access
    public:
        //attributes
        std::string Name;
        std::string Company;
        /*****This is the only way protected data can be access*****/
        int companyID=ID;
        int Age;
        //Method
        void introduceYourself()
        {
            std::cout<<"Name- "<<Name<<"| Company- "<<Company<<"| Age- "<<Age<<std::endl;
            std::cout<<"From private information= Company Id is "<<companyID<<std::endl;
        }
};
int main()
{
    Employee employee;//object
    employee.Name="Md. Raihan Alam";
    employee.Company="None";
    employee.Age=21;
    employee.introduceYourself();
    /***std::cout<<employee.AccessNo; -> will show error because this data is private*****/
    /****Protected is shown in another program*****/
    return 0;
}
