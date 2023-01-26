#include <iostream>
using namespace std;
int main()
{
    int a[10], LargestNumber;
    LargestNumber = 0;
    for (int i = 0; i < 10; i++)
    {
        cout<<"Enter elements = ";
        cin >> a[i];
    }
    for (int k = 0; k < 10; k++){
        for (int j = k + 1; j < 10; j++)
        {
            if (a[j] > a[k])
            {
                LargestNumber = a[k];
                a[k] = a[j];
                a[j] = LargestNumber;
            }
        }
    }
    cout << "second largest element is = " << a[1];
    return 0;
}