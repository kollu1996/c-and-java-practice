#include<stdio.h>
#include<stdlib.h>
struct linked
{
  int k;
  struct linked *next;
};
int main()
{
int i,j,l;
struct linked *head,*temp1,*temp,*temp2,*temp3,*previous;
head=NULL;
scanf("%d",&i);
while(i==1)
{
 scanf("%d",&j);
 if(head==NULL)
  { 
   head=(struct linked*)malloc(sizeof(struct linked));
    head->k=j;
    head->next=NULL;
    
  }
 else
{
  temp1=head;
   temp=(struct linked*)malloc(sizeof(struct linked));
   temp->k=j;
   temp->next=NULL;
  while(temp1->next!=NULL)
  {
    temp1=temp1->next;
  }
  temp1->next=temp;
}
scanf("%d",&i);
}
temp2=head;
previous=NULL;
while(temp2!=NULL)
{
   temp3=temp2->next;
  temp2->next=previous;
  previous=temp2;
   temp2=temp3;
}
head=previous;
while(head!=NULL)
{
  printf("%d\n",head->k);
  head=head->next;
}
  


}
