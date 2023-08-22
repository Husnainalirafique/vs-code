package Stack;
public class StackUsingLL {
    node top;
    class node {
        int data;
        node next;

        node(int data) {
            this.data = data;
            this.next = null;
        }
    }



    public void push(int data) {
        node newNode = new node(data);

        if (top == null) {
            top = newNode;
            System.out.println("inserted node is = " + newNode.data);
            return;
        }

        
        newNode.next = top;
        top = newNode;
        System.out.println("inserted node is = " + newNode.data);

    }

    public void pop(){
        if (top == null) {
            System.out.println("stack is empty");
            return;
        }
        int data = top.data;
        System.out.println("poped data is = "+data);
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
        stack.pop();

    }
}
