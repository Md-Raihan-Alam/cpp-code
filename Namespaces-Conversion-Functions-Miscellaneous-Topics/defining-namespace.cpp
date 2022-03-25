//Namespace Demo
#include<iostream>
using namespace std;
//define a namespace
namespace firstNS{
    class demo{
        int i;
        public:
            demo(int x){i=x;}
            void seti(int x){i=x;}
            int geti(){return i;}
    };
    char str[]="Illustrating namespaces\n";
    int counter;
}
//defined another namespace
namespace secondNS{
    int x,y;
    void myFunc(int j){cout<<j;}
}
/*One ob has been declared, its member functions can be used without namespace qualification*/
int main()
{
    //use scope resolution
    firstNS::demo ob(10);
    cout<<"Value of ob is : "<<ob.geti();
    cout<<endl;
    ob.seti(99);
    cout<<"Value of ob is now : "<<ob.geti();
    cout<<endl;
    //bring str into current scope
    using firstNS::str;
    cout<<str;
    //bring all of firstNS into current scope
    using namespace firstNS;
    for(counter=10;counter;counter--)
        cout<<counter<<" ";
    cout<<endl;
    //use secondNS namespace
    secondNS::x=10;
    secondNS::y=20;
    secondNS::myFunc(100);
    cout<<endl;
    cout<<"x,y :"<<secondNS::x;
    cout<<", "<<secondNS::y<<endl;
    //bring another namespace into view
    using namespace secondNS;
    demo xob(x),yob(y);
    cout<<"xob,yob: "<<xob.geti()<<", ";
    cout<<yob.geti()<<endl;
    return 0;
}