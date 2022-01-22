#include <iostream>
using namespace std;
#define max 5
int arr[max];
int top = -1;

bool isFull()
{
    if (top == max - 1)
        return true;
    return false;
}

bool isEmpty()
{
    if (top == -1)
        return true;
    return false;
}

void push(int data)
{
    if (!isFull())
    {
        top++;
        arr[top] = data;
        cout << "pushed element is : " << data << endl;
    }
    return;
}
void pop()
{
    if (!isEmpty())
    {
        int data = arr[top];
        top--;
        cout << "Poped element is : " << data << endl;
    }
    else
    {
        cout << "Cant pop stack is empty" << endl;
    }
}
void peek()
{
    if (!isEmpty())
    {
        cout << arr[top];
    }
    else
    {
        cout << "stack is empty" << endl;
    }
}
void display()
{
    if (!isEmpty())
    {
        for (int i = 0; i <= top; i++)
        {
            cout << arr[i]<<" ";
        }
    }
    else
    {
        cout<<"Stack is empty"<<endl;
    }
    
}
int main()
{
    push(9);
    push(10);
    display();
    return 0;
}