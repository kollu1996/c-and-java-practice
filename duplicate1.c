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
int search (struct hash * tab[100],int p);
struct linked *head1;
struct hash *tab1[10];
int main()
{
 int i,j,k,s,t,t1,r,r1,h,h1,a[100],s1=0,f=0,p1,j1=0,a1,a2,a5[100];
 for(i=0;i<10;i++)
{
  tab1[i]=NULL;
  tab1[i]=(struct hash*)malloc(sizeof(struct hash));
 }
  scanf("%d",&j);
 while(j1<j)
{
 scanf("%d",&k);
 s=k%10;
 a[s1]=k;
  s1++;
  if(tab1[s]==NULL)
   {
    tab1[s]->data1=k;
    tab1[s]->next1=NULL;
   h1++;
   }
 else
  {
   struct linked *temp;
  temp=(struct linked *)malloc(sizeof(struct linked));
  temp->data=k;
  temp->next=NULL;
  
  if(head1==NULL)
   {
     head1=temp;
    }
  else
  {
   struct linked *temp1;
   temp1=head1;
   while(temp1->next!=NULL)
   {
    temp1=temp1->next;
   }
    temp1->next=temp;
  }
}
 tab1[s]->next1=head1;
 j1++;
}
for(a2=0;a2<s1;a2++)
{
a1=a[a2];
 p1=a1%10;
 if(tab1[p1]->data1==a1)
{
  f++;
}

  struct linked *temp3;
 temp3=tab1[p1]->next1;
 while(temp3!=NULL)
{
  if(temp3->data==a1)
  {
  f++;
 }
 temp3=temp3->next;
}
 if(temp3==NULL)
{ a5[a1]=f;
}
f=0;
}
for(a2=0;a2<s1;a2++)
if(a5[a[a2]]>
}
