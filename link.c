#include<stdio.h>
#include<stdlib.h>
struct nikhil
   {
      int data;
      struct nikhil *next;
    };
 struct nikhil *head=NULL;
 struct nikhil *temp=NULL;
int main()
{
 int a,b,c;
 char s,ch;
scanf("%c",&s);
while(s=='y')
{
 if(head==NULL)
{
  scanf("%d",&a);
  head=(struct nikhil*)malloc(sizeof(struct nikhil));
  head->data=a;
  head->next=NULL;
 }
else
 {
  scanf("%d",&a);
  temp=(struct nikhil*)malloc(sizeof(struct nikhil));
  temp->data=a;
  temp->next=head;
  head=temp;
 }
scanf("%s",&s);
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
