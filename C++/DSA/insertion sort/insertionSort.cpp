#include <iostream>
using namespace std;

int main()
{
    int i, j, n, temp;
    int arr[30];
    for (i = 0; i < 6; i++)
    {
        cout << "Enter the elements = ";
        cin >> arr[i];
    }
    for (i = 1; i <= 5; i++)
    {
        temp = arr[i];
        j = i - 1;
        while (temp < arr[j] && j >= 0)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
            arr[j + 1] = temp;
        }
    }

    cout << "Sorted List = ";
     for (i = 0; i < 6; i++)
    {
        cout << arr[i] << "  ";
    }
    return 0;
}