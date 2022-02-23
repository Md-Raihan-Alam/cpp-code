///A friend function can be a member of one class and a friend of another
#include<iostream>
class truck;
class car
{
    int passengers;
    int speed;
public:
    car(int p,int s) { passengers=p;speed=s;}
    int sp_greater(truck t);/// a member function
};
class truck
{
    int weight;
    int speed;
public:
    truck(int w,int s){ weight=w;speed=s;}
    ///note new use of the scope resolution operator
    friend int car::sp_greater(truck t);///a friend function
};
/** Return positive if car speed faster than truck.
    Return 0 if speeds are the same.
    Return negative if truck speed faster than car
**/
int car::sp_greater(truck t)
{
    ///since sp_greater() is member of car, only a truck object must be passed to it
    return speed-t.speed;
}
int main()
{
    int t;
    car c1(6,55),c2(2,120);
    truck t1(10000,55), t2(20000,72);
    std::cout<<"Comparing c1 and t1:\n";
    t=c1.sp_greater(t1);///notice this; can also be written like this-> c1.car::sp_greater(t1);
    if(t<0) std::cout<<"Truck is faster.\n";
    else if (t==0) std::cout<<"Car and truck speed is the same\n";
    else std::cout<<"Car is faster\n";
    std::cout<<"\nComparing c2 and t2:\n";
    t=c2.sp_greater(t2);///notice this
    if(t<0) std::cout<<"Truck is faster.\n";
    else if (t==0) std::cout<<"Car and truck speed is the same\n";
    else std::cout<<"Car is faster\n";
    return 0;
}
