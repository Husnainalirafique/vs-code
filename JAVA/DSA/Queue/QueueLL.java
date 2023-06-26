package DSA.Queue;

public class QueueLL {
    node head = null;
    node tail;

    class node {
        int data;
        node next;

        node(int data) {
            this.data = data;
            this.next = null;
        }
    }

    public void enqueue(int data) {
        node newNode = new node(data);

        if (head == null) {
            head = newNode;
            System.out.println("enqueued data is = " + head.data);
            return;
        }
        node currentnode = head;
        while (currentnode.next != null) {
            currentnode = currentnode.next;
        }

        currentnode.next = newNode;
        System.out.println("enqueued data is = " + newNode.data);
    }

    public void dequeue() {
        if (head == null) {
            System.out.println("Empty");
            return;
        }

        tail = head;
        System.out.println("dequeued data is = " + tail.data);
        tail = tail.next;
    }

    public static void main(String[] args) {
        QueueLL queue = new QueueLL();

        queue.enqueue(5);
        queue.enqueue(4);
        queue.enqueue(3);
        queue.enqueue(2);
        System.out.println();

    }
}
