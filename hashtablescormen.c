#include<stdio.h>
#include<stdlib.h>
void search(int a);
void insert(int b);
int hash(int g);
int s;
 struct llist
  {
    int dat;
    struct llist *next;
   };
 struct llist *head=NULL;
 struct mllist
  {
    struct llist *right;
    //int m[100];
    //struct *llist;
  };
 struct mllist *rash[100];
void delete(struct llist* *head1,int p);
 int main()
{
 for(s=0;s<100;s++)
{
  rash[s]=NULL;
rash[s]=(struct mllist*)malloc(sizeof(struct mllist));
 
}

 printf("MENU: 1-INSERT \t 2-SEARCH \t 4-QUIT \n");
int q,i,a,b,t,l;
 
 while(1)
{
 scanf("%d",&q);
 switch(q)
{
  case 1:

  scanf("%d",&a);
  insert(a);
   break;

  case 2:
  
  scanf("%d",&b);
  search(b); 
  break;

 case 3:

 scanf("%d",&t);
  l=hash(t);
  struct llist *temp5;
  temp5=rash[l]->right;
  delete(&temp5,t);
   break;


  case 4:
  exit(0);
  break;
}
}
}

void insert(int k)
 {
  int p;
  p=hash(k);
  //rash=(struct mllist*)malloc(sizeof(struct mllist));
  struct llist *temp;
  temp=(struct llist*)malloc(sizeof(struct llist));
  temp->dat=k;
  temp->next=NULL;
  if(head==NULL)
 {
   head=temp;
 }
else 
 {
  struct llist *temp1=head;
  while((temp1->next)!=NULL)
 {
  temp1=temp1->next;
 }
 temp1->next=temp;
}

rash[p]->right=head;
 
}

void search(int k)
{
   int p;
   p=hash(k);
   struct llist *temp3;
   temp3=rash[p]->right;
    while(temp3!=NULL)
    {
     if((temp3->dat)==k)
    {
      printf("found\n");
     // return 0;
      exit(0);
    }
    else
  {
    temp3=temp3->next;
  }
 }
if(temp3==NULL)
{
  printf("element not found\n");
  exit(0);
}
}



/*void delete(int k)
{
  int p;
  p=hash(k);
  struct llist *temp3;
   temp3=rash[p]->right;
    while(temp3!=NULL)
    {
     if((temp3->dat)==k)
    {
      temp3*/

int hash(int g)
{
  int k,l;
  l=(g%100);
  return l;
}

void delete(struct llist* *head1,int p)
 {
    struct llist* temp = *head1, *prev;
    if (temp != NULL && temp->dat == p)
    {
        *head1 = temp->next;   
        free(temp);               
        return;
    }

    while (temp != NULL && temp->dat != p)
    {
        prev = temp;
        temp = temp->next;
    }

   if (temp == NULL) return;
    prev->next = temp->next;
 
    free(temp);  
}
    

