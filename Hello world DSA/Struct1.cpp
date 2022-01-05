#include <bits/stdc++.h>
using namespace std;
struct student
{
    int RollNo;
    int age;
    string name;
    void display()
    {
        cout << "Name = " << name << endl;
        cout << "Roll No = " << RollNo << endl;
        cout << "age = " << age << endl;
    }
};

int main()
{
    student husnain;
    husnain.name = "Husnain Ali Rafique";
    husnain.RollNo = 85;
    husnain.age = 20;
    husnain.display();
    cout << endl;
    student Danish = {86, 18, "Danish Ali Rafique"};
    Danish.display();
    cout << endl;
    return 0;
}