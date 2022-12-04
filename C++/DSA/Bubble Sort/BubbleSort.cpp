#include <iostream>
using namespace std;
int main()
{

    int arr[5];
    int i, j, c;
    for (i = 0; i <= 4; i++)
    {
        cout << "enter the number = ";
        cin >> arr[i];
    }
    
    for (i = 0; i <= 4; i++)
    {
        for (j = 0; j <= 3; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                c = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = c;
            }
        }
    }
    cout<<endl<<"After  sort = ";
    for (i = 0; i <= 4; i++)
    {
        cout << arr[i]<<" ";
    }
}
