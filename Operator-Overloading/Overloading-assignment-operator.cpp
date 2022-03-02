#include<iostream>
#include<cstring>
#include<cstdlib>
class strType
{
    char *p;
    int len;
public:
    strType(char *s);
    ~strType(){
        std::cout<<"Freeing "<<(unsigned) p<<std::endl;
        delete [] p;
    }
    char *get()
    {
        return p;
    }
    strType &operator=(strType &ob);
};
strType::strType(char *s)
{
    int l;
    l=strlen(s)+1;
    p=new char(l);
    if(!p)
    {
        std::cout<<"Allocation error"<<std::endl;
        exit(1);
    }
    len=1;
    strcpy(p,s);
}
///Assing an object
strType &strType::operator=(strType &ob)
{
    ///see if more memory is needed
    if(len<ob.len){///need to allocate more memory
    delete [] p;
    p=new char [ob.len];
    if(!p){
        std::cout<<"Allocation error\n";
        exit(1);
    }
    }
    len=ob.len;
    strcpy(p,ob.p);
    return *this;
}
int main()
{
    strType a("Hello"), b("There");
    std::cout<<a.get()<<std::endl;
    std::cout<<b.get()<<std::endl;
    a=b;//now p is not overwritten
    std::cout<<a.get()<<std::endl;
    std::cout<<b.get()<<std::endl;
    return 0;
}