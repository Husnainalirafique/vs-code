package Queue;


class QueueUsingArray {
    int n = 5;
    int queue[] = new int[n];
    int front = -1;
    int rear = -1;

    public boolean isEmpty() {
        if (front == -1 && rear == -1) {
            return true;
        } else {
            return false;
        }
    }

    public boolean isFull() {
        if (rear == n - 1) {
            return true;
        } else {
            return false;
        }
    }

    public void enqueue(int data) {
        if (isFull()) {
            System.out.println("Queue is full.");
            return;
        } else if (front == -1) {
            front = 0;
        }
        queue[++rear] = data;
        System.out.println("The enqueued data is = " + data);
    }

    public void dequeue() {
        if (isEmpty()) {
            System.out.println("Queue is empty");
            return;
        } else {

            int data = queue[front];

            for (int i = 0; i < rear; i++) {
                queue[i] = queue[i + 1];
            }

            rear--;
            if (rear == -1) {
                front = -1;
            }

            System.out.println("Dequeued data is = " + data);
        }
    }

    void displayQueue() {
        if (isEmpty()) {
            System.out.println("Queue is empty");
        } else {
            for (int i = front; i <= rear; i++) {
                System.out.print(queue[i] + " ");
            }
        }
    }

}

public class Queue {
    public static void main(String[] args) {
        QueueUsingArray queue = new QueueUsingArray();
        queue.enqueue(1);
        queue.enqueue(2);
        queue.enqueue(3);
        queue.enqueue(4);
        queue.enqueue(5);
        queue.enqueue(0);
        queue.dequeue();
        queue.dequeue();
        queue.dequeue();
        queue.dequeue();
        queue.dequeue();
        queue.dequeue();
    }
}
