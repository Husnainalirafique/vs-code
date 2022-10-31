#include <iostream>
using namespace std;
#define n 5
int queue[n];
int front = -1;
int rear = -1;
void enqueue()
{
    int data;
    if (rear == n - 1)
        cout << "Queue is full" << endl;
    else
    {
        front = 0;
        cout << "Insert value in the queue : ";
        cin >> data;
        rear++;
        queue[rear] = data;
    }
}

void dequeque()
{
    if (front == -1 && rear == -1)
    {
        cout << "Queue is empty "<<endl;
    }
    else if (front == rear)
    {
        front = rear = -1;
    }
    else
    {   
        cout << "Element deleted from queue is : " << queue[front] << endl;
        front++;
    }
}

void Display()
{
    if (front == -1 && rear==-1)
        cout << "Queue is empty" << endl;
    else
    {
        cout << "Queue elements are : ";
        for (int i = front; i <= rear; i++)
            cout << queue[i] << " ";
        
    }
}
void peek()
{
    if (front == -1 && rear == -1)
    {
        cout << "can't peek queue is empty" << endl;
    }
    else
    {
        cout << queue[front] << endl;
    }
}
void isfull()
{
    if (rear == n - 1)
        cout << "queue is full" << endl;
    else
        cout << "queue is not full" << endl;
}
void isEmpty()
{
    if (front == -1)
        cout << "queue is empty" << endl;
    else
        cout << "queque is not empty" << endl;
}
int main()
{
    int choice;
    cout << "1) insertion element to the queue" << endl;
    cout << "2) Delete element from queue" << endl;
    cout << "3) Display all the elements of queue" << endl;
    cout << "4) peek" << endl;
    cout << "5) Check isFull" << endl;
    cout << "6) Check isEmpty" << endl;
    cout << "7) Exit" << endl;
     while (choice != 7)
     {
        cout<<endl<< "Enter your choice : ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            enqueue();
            break;
        case 2:
            dequeque();
            break;
        case 3:
            Display();
            break;
        case 4:
            peek();
            break;
        case 5:
            isfull();
            break;
        case 6:
            isEmpty();
            break;
        case 7:
            cout << "exit" << endl;
            break;
        default:
            cout << "Invalid choice" << endl;
        }
    }
    return 0;
}