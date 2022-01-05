#include <bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    node *next;
};
void displayList(node *n)// n= head
{
    while (n != NULL)
    {
        cout<<n->data<<endl;// here n->data means head->data
        n=n->next;//next of head = second
    }
    
}
int main()
{
    node *head = new node();
    /*
    it creates a block of node because we used new 
    to dynamicly allocate the memory the block 
    created with new will return a address as an 
    address can only be stored in a pinter so we used
    a pointer head of node type
    */
    node *second = new node();
    node *third = new node();
    head->data = 5;
    head->next = second;
    /*
    as we created the block of node and node contain two variables 
    data and next so basically we are going to the node which 
    is name head here and in node/block/head we are accessing it's
    data variable and we are going to store a data of the type
    same as the type of data 
    head->node->data=5;
    */

    second->data = 1;
    second->next = third;

    third->data = 7;
    third->next = NULL;

    displayList(head);
    return 0;
}