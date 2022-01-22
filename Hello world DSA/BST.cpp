#include <bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    node *left, *right;
};
node *newNode(int val)
{
    node *root = new node();
    root->data = val;
    root->left = NULL;
    root->right = NULL;

    return root;
}
node *insert(node *root, int val)
{
        if (root == NULL)
        {
            return newNode(val);
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
node *search(node *root, int val)
{
    if (root == NULL || root->data == val)
    {
        return root;
    }
    if (val < root->data)
    {
        return search(root->left, val);
    }
    return search(root->right, val);
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
    root = insert(root, 10);
    insert(root, 5);
    insert(root, 11);
    insert(root, 3);
   

    node *address = search(root, 3);
    cout << address->data;

    return 0;
}