package Stack;


class StackUsingArray {
    int n = 5;
    int stack[] = new int[n];
    int top = -1;

    boolean isEmpty() {
        if (top == -1) {
            return true;
        } else {
            return false;
        }
    }

    boolean isFull() {
        if (top == n - 1) {
            return true;
        } else {
            return false;
        }
    }

    void push(int data) {
        if (isFull()) {
            System.out.println("stack is full");
        } else {
            stack[++top] = data;
            System.out.println("The inserted data is " + data);
            return;
        }
    }

    void pop() {
        if (isEmpty()) {
            System.out.println("Stack is empty");
        } else {
            int data;
            data = stack[top];  
            top--;
            System.out.println("poped data is " + data);
            return;
        }
    }
    void printStack(){
        if (isEmpty()) {
            System.out.println("Stack is empty");
        } else {
            for(int i = 0; i <= top;i++){
                System.out.print(stack[i]+" ");
            }
        }
    }
}

public class Stack {
    public static void main(String[] args) {
        StackUsingArray stack = new StackUsingArray();
        stack.push(5);
        stack.push(4);
        stack.push(7);
        stack.push(9);
        stack.push(10);
        stack.pop();
        stack.push(19);
        stack.printStack();
    }
}