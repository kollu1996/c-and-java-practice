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
 int i,j,k,p,count=0,q;
 scanf("%d",&p);
 struct linked *temp1,*temp2,*temp3;
 while(1)
{
 if(p==1)
 {
 scanf("%d",&i);
 struct linked *temp;
 temp=NULL;
 temp=(struct linked *)malloc (sizeof(struct linked));
 temp->data=i;
 temp->next=NULL;
 if(head==NULL)
 {
   head=temp;
   temp1=temp;
 }
 else
 { 
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
struct linked *head1=NULL;
struct linked *head2=NULL;
head1=head;
while(head1->data<q&&head1->next!=NULL)
 { 
   head2=head1;
   head1=head1->next;
 }
temp2=(struct linked *)malloc (sizeof(struct linked));
temp2->data=q;
temp2->next=NULL;
if(head2==NULL)
{
   temp2->next=head;
    head=temp2;
}
else if(head1->next==NULL)
{
   head1->next=temp2;
} 
else
{
temp2->next=head1;
head2->next=temp2;
}
printf("Linked list modified sucessfully\n");
scanf("%d",&p);
 }

 else if(p==4)
 {
    temp3=head;
   while(temp3!=NULL)
  {
    printf("%d\n",temp3->data);
   temp3=temp3->next;
  }
 scanf("%d",&p);
 }

 else if(p==3)
 {
   printf("Operation terminated sucessfully\n");
   exit(0);
 }

}
}





 

