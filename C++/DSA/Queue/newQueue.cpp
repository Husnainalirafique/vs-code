#include <iostream>
using namespace std;
#define n 5
int queue[n];
int front = -1;
int rear = -1;
bool isfull()
{
    if (rear == n - 1)
    {
        return true;
    }
    else
    {
        return false;
    }
}
bool isempty()
{
    if (front == -1 && rear == -1)
    {
        return true;
    }
    else
    {
        return false;
    }
}
void peek()
{
    if (isempty())
    {
        cout << "cant peek Queue is empty" << endl;
    }
    else
    {
        cout << "Peek element is = " << queue[front] << endl;
    }
}
void enqueue()
{
    int data;
    if (isfull())
    {
        cout << "cant insert data Queue is full :(" << endl;
    }
    if (front != 0)
    {
        front = 0;
    }

    else
    {
        cout << "insert value in queue = ";
        cin >> data;
        rear++;
        queue[rear] = data;
        cout << "inserted element is ------> " << queue[rear] << endl;
    }
}
void dequeue()
{
    if (isempty())
    {
        cout << "Can't remove data Queue is empty :(" << endl;
    }
    else if (front == rear)
    {
        front = rear = -1;
    }
    else
    {
        cout << "Element deleted from queue is ------> " << queue[front] << endl;
        front++;
    }
}
void display()
{
    if (isempty())
    {
        cout << "Sorry noting to show Queue is empty:(" << endl;
    }
    else
    {
        cout << "Queue elements are = ";
        for (int i = front; i <= rear; i++)
        {
            cout << queue[i] << " ";
        }
    }
}
int main()
{
    cout << "---------Main Manu----------" << endl;
    cout << "1.Enqueue" << endl;
    cout << "2.Dequeue" << endl;
    cout << "3.Peek" << endl;
    cout << "4.Display queue" << endl;
    cout << "5.Exit" << endl;

    while (true)
    {
        int choice;
        cout << endl
            << "Enter your choice = ";
        cin >> choice;

        if (choice == 5)
        {
            exit(0);
        }

        switch (choice)
        {
        case 1:
            enqueue();
            break;
        case 2:
            dequeue();
            break;
        case 3:
            peek();
            break;
        case 4:
            display();
            break;
        case 5:
            cout << "exit" << endl;
            break;
        default:
            cout << "invalid choice" << endl;
            break;
        }
    }
    return 0;
}
