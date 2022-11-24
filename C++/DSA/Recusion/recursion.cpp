#include <iostream>
using namespace std;

void function(int value)
{
   if (value < 1)
   {
      return;
   }
   cout << value <<endl;
   function(value - 1);
}

int main(int argc, char const *argv[])
{
   function(7);
   return 0;
}
