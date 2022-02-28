#include<iostream>
#include<cstdlib>
class array{
    int *p;
    int size;
public:
    array(int sz){///constructor
        p=new int[sz];
        if(!p) exit(1);
        size=sz;
        std::cout<<"Using normal constructor\n";
    }
    ~array(){ delete [] p;}
    ///copy constructor
    array(const array &a);
    void put(int i,int j)
    {
        if(i>=0 && i<size) p[i]=j;
    }
    int get(int i)
    {
        return p[i];
    }
};
///copy constructor
array::array(const array &a)
{
    int i;
    size=a.size;
    p=new int[a.size];///allocate memory for copy
    if(!p) exit(1);
    for(i=0;i<a.size;i++) p[i]=a.p[i];///copy contents
    std::cout<<"Using copy constructor\n";
}
int main()
{
    array num(10);///this calls "normal" constructor
    int i;
    ///put some values into the array
    for(i=0;i<10;i++) num.put(i,i);
    ///display num
    for(i=9;i>=0;i--) std::cout<<num.get(i)<<" ";
    std::cout<<"\n";
    ///create another array and initialize with num;
    array x=num;/// this invokes copy constructor
    ///display x
    for(i=0;i<10;i++) std::cout<<x.get(i)<<" ";
    return 0;
}