#include <iostream>
using namespace std;

void function(int value)
{
   if (value < 1)
   {
      return;
   }
   cout << value;
   function(value - 1);
}

int main(int argc, char const *argv[])
{
   function(5);
   return 0;
}
