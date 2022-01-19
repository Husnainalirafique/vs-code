#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node *leftClid;
    node *rightClid;
};
node *newNode(int val)
{
    node *tempnode = new node();
    tempnode->data = val;
    tempnode->leftClid = NULL;
    tempnode->rightClid = NULL;
    return tempnode;
}
node *root;
void insert(int data)
{
    node *current;
    node *parent;
    // node *tempnode = new node();
    // tempnode->data = data;
    // tempnode->leftClid = NULL;
    // tempnode->rightClid = NULL;

    if (root == NULL)
    {
        root = newNode(data);
        return;
    }
    else
    {
        current = root;

        while (true)
        {
            parent = current;
            if (data <= current->data)
            {
                current = current->leftClid; // then put root left child address in root
                if (current == NULL)         // if there is nothing in current
                {
                    parent->leftClid = newNode(data);
                    return;
                }
            }
            else // if current is NULL then
            {
                current = current->rightClid; // put root's right child address in root
                if (current == NULL)
                {
                    parent->rightClid = newNode(data);
                    return;
                }
            }
        }
    }
}

void search(int data)
{
    struct node *current = root;
    if (current->data == data)
    {
        cout << "Element is present = " << current->data << endl;
    }
    else
    {
        while (1)
        {
            if (current->data > data)
            {
                current = current->leftClid;
            }
            else
            {
                current = current->rightClid;
            }
            if (current == NULL)
            {
                cout << "The tree is empty \n";
                return;
            }

            if (current->data == data)
            {
                cout << "Value found = " << current->data << endl;
                return;
            }
        }
    }
}

int main()
{
    int i, j;
    while (true)
    {
        cout << "Choose the following \n 1.insert \n 2.search \n 3.exit" << endl;
        cin >> i;

        switch (i)
        {
        case 1:
            cout << "Enter a number = ";
            cin >> j;
            insert(j);
            break;
        case 2:
            cout << "Enter a number = ";
            cin >> j;
            search(j);
            break;
        case 3:
            exit(0);
            break;
        default:
            cout << "Invalid input";
        }
    }
}
