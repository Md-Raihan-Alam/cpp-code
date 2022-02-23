#include <iostream>
#include <cstring>
class inventory
{
    std::string item;
    double cost;
    int on_hand;

public:
    inventory(std::string str, double c, int o)
    {
        /**
         This is a pointer that is automatically passe to any member function when it is called, and it
          is a pointer to the object that generates the call.
        **/
        this->item = str;  /// access members
        this->cost = c;    /// through the this
        this->on_hand = o; /// pointer
    }
    void show();
};
void inventory::show()
{
    std::cout << "Item name=" << this->item << std::endl;
    std::cout << "Price=$" << this->cost << std::endl;
    std::cout << "On hand=" << this->on_hand << std::endl;
}
int main()
{
    inventory ob("Laptop", 2000, 14);
    ob.show();
    return 0;
}