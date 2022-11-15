package Tree;

public class BinaryTree {
    static class node {
        int data;
        node left, right;

        node(int data) {
            this.data = data;
            left = right = null;
        }
    }

    public static void inorder(node root) {
        if (root == null) {
            return;
        } else {
            inorder(root.left);
            System.out.print(root.data + " - >");
            inorder(root.right);
        }
    }

    public static void main(String[] args) {
        node root = new node(1);
        root.left = new node(2);
        root.right = new node(3);

        inorder(root);
    }
}
