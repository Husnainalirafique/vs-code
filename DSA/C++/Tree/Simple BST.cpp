#include <bits/stdc++.h>
using namespace std;
// Creating tree
struct node
{
    int data;
    struct node *left;
    struct node *right;
    // A constructor to store values in nodes
    node(int val){
        data=val;
        left = NULL;
        right = NULL;
    }
};
// Functions for tree traversals
void preorder(struct node* root){
    if(root==NULL)
    {
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}
void inorder(struct node* root){
    if(root == NULL)
    {
        return;
    }
    inorder(root -> left);
    cout<<root->data<<" ";
    inorder(root ->right);
}
void postorder(struct node* root){
    if(root == NULL)
    {
        return;
    }
    postorder(root -> left);
    postorder(root ->right);
    cout<<root->data<<" ";
}
int main()
{
    // Representation of created tree
    /*
       
           12
         /   \
        5     14
       / \   / \
      4   6 13 15
    
    */

   // Assigning dynamically memory to tree nodes + Assigning values
    node *root = new node(12);
    root->left = new node(5);
    root->right = new node(14);
    root->left->left = new node(4);
    root->left->right = new node(6);
    root->right->left = new node(13);
    root->right->right = new node(15);
    cout<<"preorder is = ";
    preorder(root);
    cout<<endl<<"postOrder is = ";
    postorder(root);
    cout<<endl<<"inorder is =";
    inorder(root);
    
    return 0;
}