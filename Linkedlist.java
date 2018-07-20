import java.util.*;
   
      
    public class Linkedlist
 {
         static class Node
            {
               int data;
              Node next=null;
        		    
           }

            Node node (int p)
              {
                  Node p1 = new Node();
                   p1.data=p;
                       return p1;
              }


      void appendTail(Node head,int r)
           {
                   Node e1=null;
                    Node end=node(r);
                  if(head==null)
                   {
                      head=end;
                         e1=head;
                   }
                 else
                 {
                      
              while(e1.next!=null)
                  {
                      e1=e1.next;
                   }
           e1.next=end;
            }
          
          }

  // void printlist()

        
        

        

      public static void main(String []args)
       {
   
          int q,h;
           Scanner sc = new Scanner(System.in);
            
              h=sc.nextInt();
            Linkedlist l1 = new Linkedlist();
             
             
              Node head = new Node();
               
             while(h!=0)
          {
             q=sc.nextInt();
             l1.appendTail(head,q);
             h=sc.nextInt();
          }

       System.out.println(head.data);
   
       }
      
    }
