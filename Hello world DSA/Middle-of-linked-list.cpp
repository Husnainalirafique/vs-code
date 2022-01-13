#include <bits/stdc++.h>
using namespace std;
/* Creating a node of linked list having data and next to store
   next node address
*/
struct node
{
    int data;
    node *next;
};

/* Function to display the elements of linked list */
void displayElements(node *n)
{
    int count=0;
    while (n != NULL)
    {
        cout << n->data << " " << endl;
        n = n->next;
        count++;
    }
    cout<<"Total number of elements in the linked list is : "<<count<<endl;
}

/* Function to find the middle of the linked list */
void middleElement(node *i)
{
    node *slowptr=i;
    node *fastptr=i;
    if (i != NULL)
    {
        while (fastptr != NULL && fastptr->next != NULL)
        {
            fastptr=fastptr->next->next;
            slowptr=slowptr->next;
        }
        cout<<"Middle element is : "<<slowptr->data;
    }
    
    
}
int main()
{
    /* Dynamically allocating memory ot nodes */
    node *head = new node();
    node *second = new node();
    node *third = new node();
    node *fourth = new node();
    node *fifth = new node();
    node *sixth = new node();

    /* Putting data in linked list nodes */
    head->data = 5;
    head->next = second;
    second->data = 22;
    second->next = third;
    third->data = 55;
    third->next = fourth;
    fourth->data = 2;
    fourth->next = fifth;
    fifth->data = 9;
    fifth->next = sixth;
    sixth->data = 7;
    sixth->next = NULL;

    /* Displaying the items */
    displayElements(head);

    /* Displaying the  Middle item */
    middleElement(head);

    return 0;
}