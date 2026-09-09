package com.fbs.demo;

public class MySinglyLinkedList {
         Node start;
         
         public MySinglyLinkedList(){
        	 
         }
         
//         public void iSEmpty() {
//        	 if(start==null) {
//        		 System.out.println("List is Empty");
//        		 return;
//        		 }
//         }
         
         public void insertAtBeg(int ele) {
        	 Node newNode=new Node(ele);
        	 if(start==null) {
        	 start=newNode;
        	 }
        	 else {
        	 newNode.next=start;
        	 start=newNode;
        	 } 
        	 System.out.println("---Node inserted. ---");
         
         }
         
         
         public void display() {
        	 if(start==null) {
        		 System.out.println("List is Empty");
        	 }
        	 else {
        		 Node ptr = start;
        		 System.out.println("START");
        		 while(ptr!=null) {
        			 System.out.println(ptr.data+" ->");
        			 ptr=ptr.next;
        		 }
        		 System.out.println("NULL");
        	 }
        	 
         }
         public void insertAtEnd(int data) {
          	Node temp=new Node(data);
          	if(start==null) {
          		start=temp;
          	}
          	else {
          		Node ptr=start;
          		while(ptr.next != null) {
          			ptr=ptr.next;
          		}
          		ptr.next=temp;
          	}
          }
         
       public void deleteFromBeg() {
    	   if(start==null) {
    		   System.out.println("List is Empty");
    	        return;
    	   }
    	   else {
    		   start=start.next;
    	   }
    	   System.out.println("Delete ");
       }
       
       public void deleteFromEnd() {

    	    if(start == null) {
    	        System.out.println("List is Empty");
    	        return;
    	    }

    	    if(start.next == null) {
    	        start = null;
    	        System.out.println("Node Deleted");
    	        return;
    	    }

    	    Node ptr = start;

    	    while(ptr.next.next != null) {
    	        ptr = ptr.next;
    	    }

    	    ptr.next = null;
    	    System.out.println("Node Deleted");
    	}
       public void reversList(Node temp) {
    	   if(temp==null) {
    		   return;
    	   }
    	   reversList(temp.next);
    	   System.out.print(temp.data + " ");
    	   
       }
       
       public void insertAtPos(int pos, int data) {

    	    Node newNode = new Node(data);

    	    // Insert at beginning
    	    if (pos == 1) {
    	        newNode.next = start;
    	        start = newNode;
    	        return;
    	    }

    	    Node ptr = start;
    	    int count = 1;

    	    while (count < pos - 1 && ptr != null) {
    	        ptr = ptr.next;
    	        count++;
    	    }

    	    if (ptr == null) {
    	        System.out.println("Position Out of Range");
    	        return;
    	    }

    	    newNode.next = ptr.next;
    	    ptr.next = newNode;

    	    System.out.println("Node inserted successfully.");
    	}
       
       public void deleteAtPos(int pos)
       {
           if(start == null)
           {
               System.out.println("List is Empty");
               return;
           }

           if(pos == 1)
           {
               start = start.next;
               System.out.println("Node Deleted");
               return;
           }

           Node ptr = start;
           int count = 1;

           while(count < pos-1)
           {
               if(ptr == null || ptr.next == null)
               {
                   System.out.println("Position Out of Range");
                   return;
               }

               ptr = ptr.next;
               count++;
           }

           if(ptr.next == null)
           {
               System.out.println("Position Out of Range");
               return;
           }

           ptr.next = ptr.next.next;

           System.out.println("Node Deleted");
       }
}
