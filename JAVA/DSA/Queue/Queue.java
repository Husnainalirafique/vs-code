package DSA.Queue;

public class Queue {
    int n = 5;
    int[] queue = new int[n];
    int front = -1;
    int rear = -1;

    public boolean isEmpty() {
        if (front == -1 && rear == -1) {
            return true;
        }
        return false;
    }

    public boolean isFull() {
        if (rear == n - 1) {
            return true;
        }
        return false;
    }

    public void enqueue(int data) {
        if (isFull()) {
            System.out.println("queue is full");
            return;
        }
        if (front == -1) {
            front = 0;
        }
        queue[rear++] = data;
        System.out.println("enqued data is = " + data);
    }

    public void dequeue() {
        if (isEmpty()) {
            System.out.println("queue is empty");
            return;
        }

        int data = queue[front++];
        rear--;
        System.out.println("dequeued data is =" + data);
    }

    public static void main(String[] args) {
        Queue queue = new Queue();

        queue.enqueue(5);
        queue.enqueue(4);
        queue.enqueue(3);
        queue.enqueue(2);
        queue.enqueue(1);

        queue.dequeue();
        queue.dequeue();

        queue.enqueue(8);
        queue.enqueue(10);
        System.out.println(queue.isFull());
    }
}
