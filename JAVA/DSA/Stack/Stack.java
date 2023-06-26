package DSA.Stack;
public class Stack {
    int n = 5;
    int[] stack = new int[n];
    int top = -1;

    public boolean isFull() {
        if (top == n - 1) {
            return true;
        }
        return false;
    }

    public boolean isEmpty() {
        if (top == -1) {
            return true;
        }
        return false;
    }

    public int peek(){
        return stack[top];
    }

    public void push(int data) {
        if (isFull()) {
            System.out.println("Stack is full");
            return;
        } else {
            top++;
            stack[top] = data;
            System.out.println("inserted element is = " + data);
        }
    }

    public void pop() {
        if (isEmpty()) {
            System.out.println("Stack is empty");
            return;
        } else {
            int data;
            data = stack[top];
            top--;
            System.out.println("poped data is = " + data);
        }
    }

    public static void main(String[] args) {
        Stack stack = new Stack();
        stack.push(3);
        stack.push(2);
        stack.push(1);

        // stack.pop();
        // stack.pop();
        // stack.pop();

        System.out.println(stack.peek());
        // System.out.println(stack.isEmpty());
    }
}