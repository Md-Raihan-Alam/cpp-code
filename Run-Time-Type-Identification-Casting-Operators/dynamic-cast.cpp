#include<iostream>
using namespace std;
class Base{
    public:
        virtual void f(){cout<<"Inside Base\n";}
};
class Derived:public Base{
    public:
        void f(){cout<<"Inside Derived\n";}
};
int main()
{
    Base *bp,b_ob;
    Derived *dp,d_ob;
    dp=dynamic_cast<Derived *>(&d_ob);
    if(dp){
        cout<<"Case from derived * to derived * ok\n";
        dp->f();
    }else{
        cout<<"Error\n";
    }
    cout<<endl;
    bp=dynamic_cast<Base *>(&d_ob);
    if(bp){
        cout<<"Cast from Derived * to Base * OK\n";
        bp->f();
    }else{
        cout<<"Error\n";
    }
    cout<<endl;
    bp=dynamic_cast<Base *>(&d_ob);
    if(bp){
        cout<<"Cast from Base * to Base * Ok\n";
        bp->f();
    }else{
        cout<<"Error\n";
    }
    cout<<endl;
    dp=dynamic_cast<Derived *>(&d_ob);
    if(dp){
        cout<<"Error\n";
    }
    else{
        cout<<"cast from Base * to Derived * not Ok\n";
    }
    cout<<endl;
    bp=&d_ob;// bp points to derived object
    dp=dynamic_cast<Derived *>(bp);
    if(dp){
        cout<<"Casting bp to Derived * Ok\n"<<" because bp is really pointintg\n"<<" to a Derived object\n";
        dp->f();
    }else{
        cout<<"Error\n";
    }
    cout<<endl;
    bp=&b_ob;//bp points to Base oject
    dp=dynamic_cast<Derived *>(bp);
    if(dp){
        cout<<"Error";
    }else{
        cout<<"Now casting bp to a Derived *\n"<<"is not OK because bp is really\n"<<"pointing to a Base object.\n";
    }
    cout<<endl;
    dp=&d_ob;//dp points to Derived object
    bp=dynamic_cast<Base *>(dp);
    if(bp){
        cout<<"Casting dp to a Base * is OK\n";
        bp->f();
    }else{
        cout<<"Error\n";
    }
    return 0;
}