#include<iostream>
#include<cstring>
#include<cstdlib>
class strType
{
    char *p;
    int len;
public:
    strType(char *ptr);
    ~strType();
    void show();
};
strType::strType(char *ptr)
{
    len=strlen(ptr);
    p=(char *) malloc(len+1);
    if(!p)
    {
        std::cout<<"Allocation error\n";
        exit(1);
    }
    strcpy(p,ptr);
}
strType::~strType()
{
    std::cout<<"Freeing\n";
    free(p);
}
void strType::show()
{
    std::cout<<p<<" - length:"<<len;
    std::cout<<"\n";
}
int main()
{
    strType s1("This is a test."),s2("I like C++");
    s1.show();
    s2.show();
    ///assign s1 to s2 --- this generates an error
    s2=s1;
    s1.show();
    s2.show();
    return 0;
}
