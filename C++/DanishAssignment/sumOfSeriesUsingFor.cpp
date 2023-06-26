#include <iostream>

using namespace std;

int main()
{
    int n, sum = 0;

    cout << "Enter a positive integer: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        sum += i * i;
    }

    cout << "The sum of the series using for loop is: " << sum << endl;

    return 0;
}
