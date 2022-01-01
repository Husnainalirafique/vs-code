#include <bits/stdc++.h>
using namespace std;
struct cpp
{
    int i;
    float f;
};


int main()
{
    cpp c;
    c.i = 10;
    c.f = 20.5;
    cout << c.i << " " << c.f << endl;
    delete &c;

    return 0;
}