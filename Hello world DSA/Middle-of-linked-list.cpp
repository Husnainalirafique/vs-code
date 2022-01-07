#include <bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    node *next;
};
void displayList(node *n)
{
    int count = 0;
    while (n != NULL)
    {
        cout << n->data <<" ";
        n = n->next;
        count++;
    }
    cout <<endl<< "Total number of elements in the linked list : " << count << endl;
}
void printMiddleElement(node *head)
{
    node *slowPtr=head;
    node *fastPtr=head;
    if(head != NULL){
        do
        {
            fastPtr=fastPtr->next->next;
            slowPtr=slowPtr->next;
        } while (fastPtr !=NULL && fastPtr->next !=NULL);
        cout<<"Middle element is : "<<slowPtr->data;
    }
}

int main()
{

    node *head = new node();
    node *second = new node();
    node *third = new node();
    node *four = new node();
    node *five = new node();
    node *six = new node();
    node *seven = new node();
    node *eight = new node();
    node *nine = new node();

    head->data = 5;
    head->next = second;
    second->data = 1;
    second->next = third;
    third->data = -3;
    third->next = four;
    four->data = 11;
    four->next = five;
    five->data = 10;
    five->next = six;
    six->data = 2;
    six->next = seven;
    seven->data = 7;
    seven->next = eight;
    eight->data = 9;
    eight->next = nine;
    nine->data = 18;
    nine->next = NULL;

    cout<<"Elements in linked list : ";
    displayList(head);
    printMiddleElement(head);
    
    return 0;
}