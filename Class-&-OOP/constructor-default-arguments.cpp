#include<iostream>
class myClass{
    int x;
public:
    myClass(int n=0){ x=n; }
    int show(){ return x; }
};
int main()
{
    myClass ob(10);
    myClass ob1; 
    std::cout<<"ob value="<<ob.show()<<std::endl;
    std::cout<<"ob1 value="<<ob1.show()<<std::endl;
    return 0;
}