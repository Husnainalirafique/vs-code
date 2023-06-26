#include <iostream>

using namespace std;

int main()
{
    int sum = 0;

    for (int i = 1; i <= 10; i++) {
        sum += i;
    }

    cout << "The sum of the first 10 natural numbers using for loop: " << sum << endl;

    return 0;
}
