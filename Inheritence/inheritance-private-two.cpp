#include<iostream>
class base
{
    int x;
public:
    void set_valueOfX(int n){x=n;}
    void show_valueOfX(){ std::cout<<x<<std::endl;}
};
///inheritance - as private; private properties can be accessed inside
class derived:private base
{
    int y;
public:
    ///set_valueOfX is accessible inside derived
    void set_valuesOfXY(int n,int o){
        set_valueOfX(n);///Here;note this
        y=o;
    }
    ///show_valueOfX is accessible inside derived
    void show_valueOfXY(){
        show_valueOfX();///Here;note this
        std::cout<<y<<std::endl;    
    }
};
int main()
{
    derived ob;
    ob.set_valuesOfXY(100,200);
    ob.show_valueOfXY();
    return 0;
}