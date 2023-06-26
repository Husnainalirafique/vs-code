#include <iostream>

using namespace std;

int main()
{
    int n;
    int sum = 0;
    int i = 1;

    cout << "Enter the number of natural numbers to display: ";
    cin >> n;

    cout << "The first " << n << " natural numbers are: ";
    while (i <= n) {
        cout << i << " ";
        sum += i;
        i++;
    }

    cout << endl << "Their sum is: " << sum << endl;

    return 0;
}
