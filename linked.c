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
scanf("%d",&p);
while(1)
{
  if(p==1)
{
 struct linked *temp;
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

else if(p==786)
{
  struct linked *head1;
 head1=head;
 while(head1!=NULL)
{
 printf("%d\n",head1->data);
  head1=head1->next;
}
scanf("%d",&p);
}

else if (p==800)
{
 break;
}
else if(p==369)
{
scanf("%d",&q);
struct linked *temp2,*temp3;
temp2=head;
if(temp2->data==q)
{
  head=temp2->next;
  free(temp2);
}
 else
{
   while(temp2->next!=NULL&&temp2->data!=q)
    {
      temp3=temp2;
      temp2=temp2->next;
    }

  temp3->next=temp2->next;
   free(temp2);
  head=temp3;
}
scanf("%d",&p);
}

}
}
