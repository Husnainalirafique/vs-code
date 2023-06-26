#include <iostream>

using namespace std;

int main()
{
    int n;
    int sum = 0;

    cout << "Enter the number of natural numbers to display: ";
    cin >> n;

    cout << "The first " << n << " natural numbers are: ";
    for (int i = 1; i <= n; i++) {
        cout << i << " ";
        sum += i;
    }

    cout << endl << "Their sum is: " << sum << endl;

    return 0;
}
