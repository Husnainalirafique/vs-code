#include <iostream>
using namespace std;
#define n 5
int stack[n];
int top = -1;
bool isFull()
{
    if (top == n-1)
    {
        return true;
    }
    else
    {
        return false;
    }
}
bool isEmpty()
{
    if (top == -1)
    {
        return true;
    }
    else
    {
        return false;
    }
}
peek()
{
    if(isEmpty()){
        cout<<"can't peek stack is empty"<<endl;
    }
    else
    {
        cout<<stack[top];
    }
    
}
void push()
{
    int data;
    if (isFull())
    {
        cout << "stack is full cant inset data" << endl;
    }
    else
    {
        cout<<"inset value in stack =";
        cin>>data;
        top++;
        stack[top] = data;
        cout << "element inserted is = " << stack[top] << endl;
    }
}
void pop()
{
    int data;
    if (isEmpty())
    {
        cout << "cant pop stack is empty" << endl;
    }
    else
    {
       data=stack[top];
       top--;
       cout<<"poped element is = "<<data<<endl; 
    }
}

int main()
{
    cout << "---------Main Manu----------" << endl;
    cout << "1.Push" << endl;
    cout << "2.Pop" << endl;
    cout << "3.Peek" << endl;
    cout << "4.Exit" << endl;
    int choice;
    while (choice != 4)
    {
        cout << endl
             << "Enter your choice = ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            peek();
            break;
        case 4:
            cout << "exit" << endl;
        default:
            cout << "invalid choice"<<endl;
        }
    }
    return 0;
}