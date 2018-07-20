#include<stdio.h>
#include<stdlib.h>
struct hash
{
  int data;
  struct linkedlist *next;
};

struct linkedlist
{
  int val1;
  struct linkedlist *next1;
};
struct linkedlist *head;
struct hash *tab1[10];
int main()
{
 int i,j,k,p,l,s,m,t,q,q1;
for(m=0;m<10;m++)
{
  tab1[m]=NULL;
tab1[m]=(struct hash *)malloc(sizeof(struct hash));
}
 
scanf("%d",&p);
 while(p==1&&p!=0)
{
 scanf("%d",&i);
 j=i%10;
 if(j<0)
 {
   printf("INVALID NUMBER\n");
   exit(0);
  }


  if(tab1[j]==NULL)
   {
     tab1[j]->data=i;
     tab1[j]->next=NULL;
   }
  else
{
 struct linkedlist *temp;
  temp=(struct linkedlist*)malloc(sizeof(struct linkedlist));
  temp->val1=i;
  temp->next1=NULL;
  if(head==NULL)
 {
  head=temp;
 }
 else
{
   struct linkedlist *temp1;
   temp1=head;
   while(temp1->next1!=NULL)
    {
      temp1=temp1->next1;
     }
     temp1->next1=temp;
 }
 
tab1[j]->next=head;
printf("ENTERED SUCESSFULLY\n");
scanf("%d",&p);
}
}
if(p==0)
{
  scanf("%d",&l);
  t=l%10;
   if(tab1[t]->data==l)
    {
       printf("FOUND\n");
     }
   else
   {
     struct linkedlist *temp3;
     printf("%d\n",t);
     temp3=tab1[t]->next;
    
     
       while(temp3!=NULL)
        {
           if(temp3->val1==l)
             {
               printf("FOUND\n");
               exit(0);
              }
           else
             {
               temp3=temp3->next1;
             }
        }
    
      if(temp3==NULL)
      {
        printf("NOT FOUND\n");
         exit(0);
      }
   }
 }
}
   
   
      

 
  
  
 
