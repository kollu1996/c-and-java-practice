#include<stdio.h>
#include<stdlib.h>
struct linked
{
  int dat;
  struct linked *next;
};
 
 struct hash
{
   int data;
   struct linked *next1;
};
struct hash *a[10];
struct linked *head=NULL;
void main()
{
 int i,m,j,count=0,x,r=0,l=0,b[100],z;
 char alpha;
 for(i=0;i<10;i++)
{
   a[i]=NULL;
   a[i]=(struct hash*)malloc(sizeof(struct hash));
}
scanf("%d",&m);
while(m==1)
{
scanf("%c",&alpha);

j=alpha%10;
b[count]=alpha;
count++;
if(a[j]==NULL)
{
a[j]->data=alpha;
a[j]->next1=NULL;
}
else
{
 struct linked *temp;
 temp=(struct linked*)malloc(sizeof(struct linked));
 temp->dat=j;
 temp->next=NULL;
 if(head==NULL)
{
 head=temp;
}
else
{
  struct linked *temp1;
  temp1=head;
 while(temp1->next!=NULL)
{
  temp1=temp1->next;
}
 temp1->next=head;
}
a[j]->next1=head;
}
printf("Entered sucessfully\n");
scanf("%d",&m);
}

printf("%d\n",count);
  for(r=0;r<count;r++)
{

  z=b[r]%10;

  if(a[z]->data==b[r])
    {
      l++;
   }
 if(a[z]->next1!=NULL)
{  
   struct linked *temp3;
  temp3=a[z]->next1;
  while(temp3!=NULL)
{
  if(temp3->dat==b[r])
    {
        l++;
    }
}
}

printf("%c repeated %d times\n",b[r],l);
 l=0;
}
}
