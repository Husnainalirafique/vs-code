package DSA.Stack;
public class StackUsingLL {
    node top = null;
    class node {
        int data;
        node next;

        node(int data) {
            this.data = data;
            this.next = null;
        }
    }

    public boolean isEmpty() {
        if (top == null) {
            return true;
        }
        return false;
    }

    public void push(int data) {
        node newNode = new node(data);

        if (isEmpty()) {
            top = newNode;
            System.out.println("inserted node is = " + newNode.data);
            return;
        }

        
        newNode.next = top;
        top = newNode;
        System.out.println("inserted node is = " + newNode.data);

    }

    public void pop(){
        if (isEmpty()) {
            System.out.println("stack is empty");
        }
        System.out.println("poped data is = "+top.data);
        top = top.next;
    }

    public static void main(String[] args) {
        StackUsingLL stack = new StackUsingLL();

        stack.push(5);
        stack.push(4);
        stack.push(3);

        stack.pop();
        stack.pop();
        stack.pop();

        System.out.println(stack.isEmpty());
    }
}
