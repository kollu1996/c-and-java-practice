#include<stdio.h>
#include<stdlib.h>
struct nikhil
   {
      int data;
      struct nikhil *next;
    };
 struct nikhil *head=NULL;
int main()
{
 int a,b,c;
 char s,ch;
scanf("%c",&s);
while(s=='y')
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

if(s=='n')
{
  while(head!=NULL)
 {
  printf("%d\n",head->data);
  head=head->next;
 }
}
}
