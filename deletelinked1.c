#include<stdio.h>
#include<stdlib.h>
struct nikhil
   {
      int data;
      struct nikhil *next;
    };
 
 void delete(struct nikhil* *bst,int p);
int main()
{
 int a,b,c,q;
 char s,ch;
scanf("%c",&s);
 struct nikhil *head=NULL;
while(1)
{
 if(s=='y')
 {
 scanf("%d",&a);
 struct nikhil *temp;
 temp=(struct nikhil*)malloc(sizeof(struct nikhil));
  temp->data=a;
  temp->next=NULL;
 
 if(head==NULL)
 {
  head=temp;
 }
 else
 {
 
  struct nikhil *temp1=head;
  while(temp1->next!=NULL)
 {
  temp1=temp1->next;
 }
 temp1->next=temp;
}
scanf("%c%c",&ch,&s);
}
else if(s=='n')
{
  if(head==NULL)
 {
   exit(0);
 }
  struct nikhil *temp1=head;

  while(temp1!=NULL)
 {
  printf("%d\n",temp1->data);
  temp1=temp1->next;
 }
 scanf("%c%c",&ch,&s);
}
else if(s=='p')
 {
   scanf("%d",&q);
   delete (&head,q);
  scanf("%c%c",&ch,&s);
}
else 
{
  exit(0);
 }
}
}

void delete(struct nikhil* *head1,int p)
 {
    struct nikhil* temp = *head1, *prev;
    if (temp != NULL && temp->data == p)
    {
        *head1 = temp->next;   
        free(temp);               
        return;
    }

    while (temp != NULL && temp->data != p)
    {
        prev = temp;
        temp = temp->next;
    }

   if (temp == NULL) return;
    prev->next = temp->next;
 
    free(temp);  
}
    
