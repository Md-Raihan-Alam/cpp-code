#include<iostream>
#include<cstring>
#include<cstdlib>
class samp
{
    char *s;
public:
    samp() { s='\0';}
    ~samp() { if(s) free(s); std::cout<<"Freeing s\n";}
    void show() {std::cout<<s<<"\n";}
    void setStr(char *str);
};
///Load a string
void samp::setStr(char *str)
{
    s=(char *) malloc(strlen(str)+1);
    if(!s)
    {
        std::cout<<"Allocation error\n";
        exit(1);
    }
    strcpy(s,str);
}
///Return an object of type samp
samp input()
{
    char s[80];
    samp str;
    std::cout<<"Enter a string: ";
    std::cin>>s;
    str.setStr(s);
    return str;
}
int main()
{
    samp ob;
    ///assign returned object to ob
    ob=input(); ///This causes an error!!!
    ob.show();
    return 0;
}
