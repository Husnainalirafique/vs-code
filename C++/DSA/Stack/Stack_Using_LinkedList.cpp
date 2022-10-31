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

node *top = NULL;

// Methods

bool isEmpty()
{
    if (top == NULL)
    {
        return true;
    }
    else
    {
        return false;
    }
}
void push(int data)
{
    node *newNode = new node(data);
    if (isEmpty())
    {
        top = newNode;
        cout << "Pushed data is = " << data << endl;
        return;
    }
    else
    {
        newNode->next = top;
        top = newNode;
        cout << "Pushed data is = " << data << endl;
    }
}

void pop()
{
    int data;
    if (!isEmpty())
    {
        data = top->data;
        cout << "poped data elemt is = " << data << endl;
        top = top->next;
    }

    else
    {
        cout << "Stack is empty";
    }
}
void peek()
{
    if (!isEmpty())
    {
        cout << "The last entered data/ data at top is = " << top->data << endl;
    }
    else
    {
        cout << "Can't peek stack is empty";
    }
}
void display()
{
    if (isEmpty())
    {
        cout << "Stack is empty";
        return;
    }
    else
    {
        node *currentnode = top;
        while (currentnode != NULL)
        {
            cout << "| " << currentnode->data << " |" << endl;
            currentnode = currentnode->next;
        }
        cout<<"-----";
    }
}
int main()
{
    cout << "---------Husnain Ali Rafique----------" << endl;

    cout << "--------------Main Manu---------------" << endl;
    cout << "1.Push" << endl;
    cout << "2.Pop" << endl;
    cout << "3.Peek" << endl;
    cout << "4.Display" << endl;
    cout << "4.Exit" << endl;

    while (true)
    {
        int choice;
        cout << endl
             << "Enter your choice = ";
        cin >> choice;
        if (choice == 0)
        {
            exit(0);
        }

        switch (choice)
        {
        case 1:
            int data1;
            cout << "Enter data to insert = ";
            cin >> data1;
            push(data1);
            break;
        case 2:
            pop();
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
        }
    }

    return 0;
}
