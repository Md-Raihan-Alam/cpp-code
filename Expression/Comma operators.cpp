#include <iostream>
#include<conio.h>

int main() {
   int i, j;

   j = 10;
   i = (j++, j+100, 999+j);

   std::cout << i;

   getch();
}
