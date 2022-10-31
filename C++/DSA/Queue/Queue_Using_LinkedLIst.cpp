#include <iostream>
using namespace std;

struct node
{
    int data;
    node *next;
    node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

node *front = NULL;
node *rear = NULL;

// Methods
bool isEmpty()
{
    if (front == NULL && rear == NULL)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void enQueue(int data)
{
    node *newNode = new node(data);
    if (front == NULL)
    {
        front = rear = newNode;
        cout << "inserted data is = " << data << endl;
        return;
    }

    else
    {
        rear->next = newNode;
        rear = newNode;
        cout << "inserted data is = " << data << endl;
    }
}

void deQueue()
{
    if (isEmpty())
    {
        cout << "Queue is empty";
        return;
    }

    else
    {
        int data = front->data;
        front = front->next;
        cout << "Deleted data is = " << data << endl;

        if (front == NULL)
        {
            rear = NULL;
            return;
        }
    }
}

void peek()
{
    if (isEmpty())
    {
        cout << "Queue is empty";
        return;
    }
    else
    {
        cout << front->data << endl;
    }
}

void display()
{
    if (isEmpty())
    {
        cout << "Queue is empty";
        return;
    }
    else
    {
        node *currentnode = front;
        while (currentnode != NULL)
        {
            cout << currentnode->data << " - ";
            currentnode = currentnode->next;
        }
        cout << "NULL";
    }
}

int main()
{

    cout << "---------Main Manu----------" << endl;
    cout << "1.Enqueue" << endl;
    cout << "2.Dequeue" << endl;
    cout << "3.Peek" << endl;
    cout << "4.Display linklist" << endl;
    cout << "5.Exit" << endl;
    int choice;
    while (choice != 5)
    {
        cout << endl
             << "Enter your choice = ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            int data;
            cout << "Enter data to insert = ";
            cin >> data;
            enQueue(data);
            break;
        case 2:
            deQueue();
            break;
        case 3:
            peek();
            break;
        case 4:
            display();
            break;
        case 5:
            cout << "exit" << endl;
        default:
            cout << "invalid choice" << endl;
        }
    }
    return 0;
}