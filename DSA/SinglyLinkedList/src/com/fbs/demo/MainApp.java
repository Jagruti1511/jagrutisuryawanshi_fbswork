package com.fbs.demo;

import java.util.Scanner;

public class MainApp {

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        MySinglyLinkedList list = new MySinglyLinkedList();

        int ch;

        do {

            System.out.println("\n===== Singly Linked List =====");
            System.out.println("1. Insert At Beginning");
            System.out.println("2. Insert At End");
            System.out.println("3. Insert At Position");
            System.out.println("4. Delete From Beginning");
            System.out.println("5. Delete From End");
            System.out.println("6. Delete From Position");
            System.out.println("7. Display");
            System.out.println("8. Reverse Display");
            System.out.println("9. Exit");
            System.out.print("Enter Choice : ");

            ch = sc.nextInt();

            switch(ch) {

            case 1:
                System.out.print("Enter Data : ");
                list.insertAtBeg(sc.nextInt());
                break;

            case 2:
                System.out.print("Enter Data : ");
                list.insertAtEnd(sc.nextInt());
                break;

            case 3:
                System.out.print("Enter Position : ");
                int pos = sc.nextInt();

                System.out.print("Enter Data : ");
                int data = sc.nextInt();

                list.insertAtPos(pos, data);
                break;

            case 4:
                list.deleteFromBeg();
                break;

            case 5:
                list.deleteFromEnd();
                break;

            case 6:
                System.out.print("Enter Position : ");
                pos = sc.nextInt();

                list.deleteAtPos(pos);
                break;

            case 7:
                list.display();
                break;

            case 8:
                System.out.println("Reverse List :");
                list.reversList(list.start);
                System.out.println();
                break;

            case 9:
                System.out.println("Program Ended...");
                break;

            default:
                System.out.println("Invalid Choice");
            }

        } while(ch != 9);

        sc.close();
    }
}