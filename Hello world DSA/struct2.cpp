#include <bits/stdc++.h>
using namespace std;
struct teachers
{
    string name;
    int age;
    void display()
    {
        cout << "Name = " << name << endl;
        cout << "Age = " << age << endl;
    }
};

int main()
{
    teachers school[2]={{"husnain",20},{"danish",18}};
    for(int i=0;i<2;i++)
    {
        school[i].display();
    }
    // teachers me[2];
    // me[0].name = "husnain";
    // me[0].age = 20;
    // me[0].display();
    // cout << endl;
    // me[1].name = "danish";
    // me[1].age = 18;
    // me[1].display();
    // cout << endl;

    // school[0].display();
    // school[1].display();
    

    return 0;
}