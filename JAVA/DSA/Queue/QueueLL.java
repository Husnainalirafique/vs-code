package Queue;

public class QueueLL {
    node head = null;
    node front;

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

        front = head;
        System.out.println("dequeued data is = " + front.data);
        front = front.next;
    }
    public void displayList() {
        if (head == null) {
            System.out.println("LinkedList is empty");
            return;
        }

        node currentNode = front;
        while (currentNode != null) {
            System.out.print(currentNode.data + " ->");
            currentNode = currentNode.next;
        }
        System.out.println("null");
    }

    public static void main(String[] args) {
        QueueLL queue = new QueueLL();

        queue.enqueue(5);
        queue.enqueue(4);
        queue.enqueue(3);
        queue.enqueue(2);
        queue.dequeue();
        queue.displayList();
        System.out.println();

    }
}
