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

node *head;

// Methods
bool isEmpty()
{
    if (head == NULL)
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
    if (isEmpty())
    {
        head = newNode;
        cout << "inserted data is = " << data << endl;
        return;
    }
    else
    {
        node *currentNode = head;
        while (currentNode->next != NULL)
        {
            currentNode = currentNode->next;
        }

        currentNode->next = newNode;
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
        int data;
        data = head->data;
        cout << "Deleted data is = " << data << endl;
        head = head->next;
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
        cout << head->data << endl;
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
        node *currentnode = head;
        while (currentnode != NULL)
        {
            cout << currentnode->data<<" <- ";
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
            int data1;
            cout << "Enter data to insert = ";
            cin >> data1;
            enQueue(data1);
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