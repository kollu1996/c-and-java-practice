#include<stdio.h>
#include<stdlib.h>
struct linked
{
 int data;
 struct linked *next;
};
struct linked *head=NULL;
 int main()
{
 int i,j,k,p,q;
  struct linked *temp;
  scanf("%d",&p);
  while(1)
 {
   if(p==1) 
 {
  scanf("%d",&i);
 temp=(struct linked*)malloc(sizeof(struct linked));
 temp->data=i;
 temp->next=NULL;
 if(head==NULL)
{
  head=temp;
}
else
{
  struct linked *temp1=head;
  while(temp1->next!=NULL)
 {
   temp1=temp1->next;
 }  
temp1->next=temp;
}
scanf("%d",&p);
}

else if(p==2)
{
  scanf("%d",&q);
  struct linked *temp3;
  temp3=head;
  while(temp3->next->data==q)
  {
    break;
  }
  temp3->next=temp3->next->next;
  //free(temp3->next);
  printf("Deleted node sucessfully\n");
  scanf("%d",&p);
 }
else if(p==3)
{
   struct linked *temp4;
  temp4=head;
  while(temp4!=NULL)
 {
   printf("%d\n",temp4->data);
  temp4=temp4->next;
 }
   scanf("%d",&p);
}
else
 {
  break;
 }
}
}


