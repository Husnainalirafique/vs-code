#include <bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    node *left, *right;
};
node *newNode(int val)
{
    node *newnode = new node();
    newnode->data = val;
    newnode->left = NULL;
    newnode->right = NULL;
    return newnode;
}
node *insert(node *root, int val)
{
    if (root == NULL)
    {
        return new node(val);
    }
    else
    {
        if (val < root->data)
        {
            root->left = insert(root->left, val);
        }
        else
        {
            root->right = insert(root->right, val);
        }
    }
    return root;
}
void preorder(node *root)
{
    if (root == NULL)
        return;
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}
int main()
{
    node *root = NULL;
    root = insert(root, 5);
    insert(root, 6);
    insert(root, 3);
    insert(root, 4);
    insert(root, 2);
    insert(root, 7);

    preorder(root);

    return 0;
}