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
    p=(char *)malloc(len-1);
    if(!p){
        std::cout<<"Allocation error";
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
    std::cout<<p<<std::endl;
}
int main()
{
    strType str1("This is test"),str2("I like C++");
    str1.show();
    str2.show();
    return 0;
}
