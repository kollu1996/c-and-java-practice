
 #include <stdio.h>
 #include <stdlib.h>

 struct hash
 {
   int count;
   struct hash *head;
 };
 struct hash *hashtable;
 int elenum=0;

 struct node
{
  int value;
  struct node *next;
};
struct node * makenode (int num);
void insert(int i);
void search (int k);

int main()

{
   int k,n,ch;
   scanf("%d",&n);
   elenum=n;
  hashtable= (struct hash *) calloc(n,sizeof(struct hash));
  while (1) {
        printf("\n1. Insertion\t2. Deletion\n");
        printf("3. Searching\t4. Display\n5. Exit\n");
        printf("Enter your choice:");
        scanf("%d", &ch);
        switch (ch) {
        case 1:
            printf("Enter the key value:");
            scanf("%d", &k);
            /*inserting new node to hash table */
            insert(k);
            break;
 
        
 
        case 3:
            printf("Enter the key to search:");
            scanf("%d", &k);
            search(k);
            break;
        
        case 5:
            exit(0);
        default:
            printf("U have entered wrong option!!\n");
            break;
        }
    }
    return 0;
}
  

 struct node * makenode (int num)
{
   struct node *mynode;
   mynode=(struct node *)malloc(sizeof(struct node));
   mynode->value=num;
   mynode->next=NULL;
   return mynode ;
}

 void insert(int i)
{
   int hash,k;
   hash=i % elenum;
   struct node *mynode=makenode(i);
   if(!hashtable[hash].head)
  {
     hashtable[hash].head=mynode;
     hashtable[hash].count=1;
  }
  
    mynode->next=(hashtable[hash].head);
    hashtable[hash].head=mynode;
    hashtable[hash].count++;
  
}

 void search (int k)
{
  int hash;
  hash=k%elenum;
  struct node *newnode;
  newnode=hashtable[hash].head;
  if(!newnode)
 {
    printf("element not found\n");
 }
  
   while(newnode!=NULL)
 {
    if(newnode->value==k)
   {
    printf("element found\n");
    break;
    }
    newnode=newnode->next;
}
}
   
    
    
    
    
    

 

 
   
