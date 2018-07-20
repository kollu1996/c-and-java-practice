#include<stdio.h>
#include<stdlib.h>
struct linked 
{
 int data;
 struct linked *next;
};
//struct linked * reverse(struct linked *head2);
int main()
{
 int i,j,k,p,s=1,num;
 struct linked *head,*temp,*head1,*head4,*head3;
 head4=NULL;
 head=NULL;
 scanf("%d",&num);
 scanf("%d",&j);
 for(k=0;k<j;k++)
{
 scanf("%d",&i);
 temp=(struct linked*)malloc(sizeof(struct linked));
 temp->data=i;
 temp->next=NULL;
 if(head==NULL)
{
 head=temp;
  head1=temp;
}
else
 {
   while(head1->next!=NULL)
    {
      head1=head1->next;
     }
   head1->next=temp;
  }
}
head3=head;
while(s<num)
{
  head3=head3->next;
  s++;
}
 head4=head3;
while(head3->next!=NULL)
{
  head3=head3->next;
}
head3->next=head;
head=head4->next;
head4->next=NULL;
while(head!=NULL)
{
printf("%d\n",head->data);
head=head->next;
}
}
