#include <iostream>

using namespace std;

int main()
{
    int num;
    bool isPrime = true;
    int i = 2;

    cout << "Enter a positive integer: ";
    cin >> num;

    while (i <= num / 2) {
        if (num % i == 0) {
            isPrime = false;
            break;
        }
        i++;
    }

    if (isPrime)
        cout << num << " is a prime number" << endl;
    else
        cout << num << " is not a prime number" << endl;

    return 0;
}
