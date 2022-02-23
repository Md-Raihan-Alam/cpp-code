#include<iostream>
#include<cstring>
#include<cstdlib>
#define SIZE 256
class strtype
{
    char *p;
    int len;
public:
    strtype();///constructor
    ~strtype();///destructor
    void setNow(char *ptr);
    void show();
};
///constructor initialize
strtype::strtype()
{
    p=(char *)malloc(SIZE);
    if(!p){
        std::cout<<"Error in allocating memory";
        exit(1);
    }
    *p='\0';
    len=0;
}
///Free memory when destroying string object
strtype::~strtype()
{
    std::cout<<"Freeing\n";
    free(p);
}
void strtype::setNow(char *ptr)
{
    if(strlen(ptr)>=SIZE){
       std::cout<<"String is too big\n";
        return;
    }
    strcpy(p,ptr);
    len=strlen(p);
}
void strtype::show()
{
    std::cout<<p<<" - length: "<<len<<"\n";
}
int main()
{
    strtype str1,str2;
    str1.setNow("This is a test");
    str2.setNow("I like C++");
    str1.show();
    str2.show();
    return 0;
}
