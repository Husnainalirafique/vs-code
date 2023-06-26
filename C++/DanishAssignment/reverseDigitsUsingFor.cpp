#include <iostream>

using namespace std;

int main()
{
    int num, reversed_num = 0, digit;

    cout << "Enter a positive integer: ";
    cin >> num;

    for (; num > 0; num /= 10) {
        digit = num % 10;
        reversed_num = reversed_num * 10 + digit;
    }

    cout << "The reversed number using for loop is: " << reversed_num << endl;

    return 0;
}
