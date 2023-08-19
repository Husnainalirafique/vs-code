package LinkedList;

public class NewLL {
    Node head;
    class Node{
        int data;
        Node next;
        Node(int data){
            this.data = data;
            this.next = null;
        }
    }

    public void AddAtFirst(int data){
        Node newNode = new Node(data);

        if (head == null) {
            head = newNode;
            return;
        }

        newNode.next = head;
        head = newNode;
    }

    public void AddAtLast(int data){
        Node newNode = new Node(data);
        if (head == null) {
            head = newNode;
            return;
        }

        Node currentNode = head;
        while (currentNode.next != null) {
            currentNode = currentNode.next;
        }
        currentNode.next = newNode;
    }

    public void Display(){
        if (head == null) {
            System.out.println("Linkedlist is null");
            return;
        }

        Node currentNode = head;
        while (currentNode != null) {
            System.out.print(currentNode.data + " -> ");
            currentNode = currentNode.next;
        }
    }
    public static void main(String[] args) {
        NewLL LinkedList = new NewLL();

        LinkedList.AddAtLast(1);
        LinkedList.AddAtLast(2);
        LinkedList.AddAtLast(3);
        LinkedList.AddAtLast(4);

        LinkedList.Display();

    }
}
