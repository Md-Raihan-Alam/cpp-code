#include<iostream>
class base
{
    int x;
public:
    void set_valueOfX(int n){x=n;}
    void show_valueOfX(){std::cout<<x<<std::endl;}
};
///Inheritance- as private
class derived:private base
{
    int y;
public:
    void set_valueOfY(int n){y=n;}
    void show_valueOfY(){
        std::cout<<y<<"\n";
    }
};
int main()
{
    derived ob;
    ///ob.set_valueOfX(10);-> it became private, check line 10
    ob.set_valueOfY(20);
    ob.show_valueOfY();
    return 0;
}