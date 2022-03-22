#include<iostream>
#include<new>// needed
int main()
{
    int *p;
    try{
        p=new int;//allocate memory for int
    }catch(std::bad_alloc xa){
        std::cout<<"Allocation failure\n";
        return 1;
    }
    for(*p=0;*p<10;(*p)++) std::cout<<*p<<" ";
    delete p;//free the memory
    return 0;
}