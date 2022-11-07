#include <iostream>
using namespace std;

void printnum(int number)
{
    if (number == 0)
    {
        return;
    }
    
    cout << number<<endl;
    printnum(number - 1);
}

int main(int argc, char const *argv[])
{
    printnum(5);
    return 0;
}
