//A shared resources example
#include<iostream>
#include<cstring>
using namespace std;
class output{
    static char outbuf[255];//this is the shared resources
    static int inuse;//buffer available if 0;
    static int oindex;//index of outbuf
    char str[80];
    int i;//index of next char in str
    int who;//identifies the object, must be >0
    public:
    output(int w,char *s){strcpy(str,s);i=0;who=w;}
    /*This function returns -1 if waiting for buffe,
    it returns 0 if it is done outputtitng, and it returns who if it is still using
    the buffer*/
    int putbuf()
    {
        if(!str[i]){//done outputting
        inuse=0;//release buffer
        return 0;//signal termination
        }
        if(!inuse) inuse=who;//get buffer
        if(inuse!=who) return -1;//in use by someone else
        if(str[i]){//still chars to output
        outbuf[oindex]=str[i];
        i++;
        oindex++;
        outbuf[oindex]='\0';//always keep null-terminated
        return 1;
        }
        return 0;
    }
    void show(){cout<<outbuf<<endl;}
};
char output::outbuf[255];//this is the shared resources
int output::inuse=0;//buffer available if 0
int output::oindex=0;//index of outbuf
int main()
{
    output o1(1,"This is a test"),o2(2," of statics");
    while(o1.putbuf() | o2.putbuf());//output chars
    o1.show();
    return 0;
}