#include<stdio.h>
#include<stdlib.h>
struct linked
{
 int data;
 struct linked *next;
};

struct hash
{
  int data1;
  struct linked *next1;
};
int main()
{
 int i,j,k,l,m,m1;
 struct hash *c[10];
 for(i=0;i<10;i++)
{
  c[i]=NULL;
  c[i]=(struct hash *)malloc(sizeof(struct hash));
}

struct linked *head;
head=NULL;
scanf("%d",&j);
while(j!=3)
{
 if(j==1)
 {
 scanf("%d",&k);
 l=k%10;
 if(c[l]==NULL)
 {
   c[l]->data1=k;
   c[l]->next1=NULL; 
 }
 else
{
  struct linked *temp;
  temp=(struct linked *)malloc(sizeof(struct linked));
  temp->data=k;
   temp->next=NULL;
if(head==NULL)
{
  head=temp;
}
else
{
   struct linked *temp2;
  temp2=head;
  while(temp2->next!=NULL)
 {
  temp2=temp2->next;
}
temp2->next=temp;
}
c[l]->next1=head;
}
scanf("%d",&j);
}
if(j==2)
{
 scanf("%d",&m);
 m1=m%10;
 
   if(c[m1]->data1==m)
     {
     printf("hey  found\n");
     }
  else
   {
    struct linked *temp4;
    temp4=c[m1]->next1;
   while(temp4!=NULL)
  {
   if(temp4->data==m)
   {
     printf("found\n");
      break;
   }
  else
  {
   temp4=temp4->next;
  }
 }
   if(temp4==NULL)
  {
    printf("not found\n");
     break;
  }
}
scanf("%d",&j);
}
}
}
   



















