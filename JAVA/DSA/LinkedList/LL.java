package JAVA.DSA.LinkedList;

import java.util.Scanner;

public class LL {
    Scanner in = new Scanner(System.in);
    node head;

    class node {
        int data;
        node next;

        node(int data) {
            this.data = data;
            this.next = null;
        }
    }

    public void addAtFirst(int data) {
        // firstly create a node to work with
        node newNode = new node(data);

        if (head == null) {
            head = newNode;
            return;
        }

        newNode.next = head;
        head = newNode;

    }

    public void addAtLast(int data) {
        node newNode = new node(data);

        if (head == null) {
            head = newNode;
            return;
        }

        node currentNode = head;
        while (currentNode.next != null) {
            currentNode = currentNode.next;
        }

        currentNode.next = newNode;
    }

    public void displayList() {
        if (head == null) {
            System.out.println("LinkedList is empty");
            return;
        }

        node currentNode = head;
        while (currentNode != null) {
            System.out.print(currentNode.data + " ->");
            currentNode = currentNode.next;
        }
        System.out.println("null");
    }

    public void atSpecifiedPosition(int data) {
        node newNode = new node(data);

        if (head == null) {
            System.out.println("List is empty");
            return;
        }

        System.out.println("Enter position of node to be inserted = ");
        int position = in.nextInt();

        if (position < 1) {
            System.out.print("Invalid position");
            return;
        }

        if (position == 1) {
            newNode.next = head;
            head = newNode;
            return;
        }

        node currentNode = head;
        for (int i = 1; i < position - 1; i++) {
            currentNode = currentNode.next;
            if (currentNode == null) {
                System.out.println("Enter valid position");
                return;
            }
        }

        newNode.next = currentNode.next;
        currentNode.next = newNode;
    }

    public static void main(String[] args) {
        LL LinkedList = new LL();
        Scanner in = new Scanner(System.in);
        System.out.println("--------Linked List Coded by Husnain Ali Rafique--------");
        System.out.println("To insert at first enter 1 ");
        System.out.println("To Insert at last enter 2 ");
        System.out.println("To insert at specified location enter 3");
        System.out.println("To Display Linked List enter 4 ");
        System.out.println("To exit enter 0");

        while (true) {
            System.out.println();
            System.out.print("Enter you choice Here = ");
            int choice = in.nextInt();
            if (choice == 0) {
                System.exit(1);
            }
            switch (choice) {
                case 1:
                    System.out.print("Enter data to insert = ");
                    int data = in.nextInt();
                    LinkedList.addAtFirst(data);
                    break;
                case 2:
                    System.out.print("Enter data to insert = ");
                    int data2 = in.nextInt();
                    LinkedList.addAtLast(data2);
                    break;
                case 3:
                    System.out.print("Enter data to insert = ");
                    int data3 = in.nextInt();
                    LinkedList.atSpecifiedPosition(data3);
                    break;
                case 4:
                    LinkedList.displayList();
                    break;
                default:
                    System.out.println("Please enter valid choice");
                    break;
            }
        }
    }

}
