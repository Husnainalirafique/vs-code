#include <iostream>

using namespace std;

int main()
{
    int num, digit, sum = 0;

    cout << "Enter a positive integer: ";
    cin >> num;

    for (; num > 0; num /= 10) {
        digit = num % 10;
        sum += digit;
    }

    cout << "The sum of the digits of the given number using for loop is: " << sum << endl;

    return 0;
}
