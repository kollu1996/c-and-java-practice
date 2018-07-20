#include<stdio.h>
#include<stdlib.h>
struct btree
{
  int data;
  struct btree *left;
  struct btree *right;
};
void print(struct btree *bst1);
void insert(struct btree **bst,int p);
int printlevel(struct btree *bst2,int h,int level);
int main()
{
 int i,j,k,g,h,level=1;
 struct btree *main=NULL;
 scanf("%d",&j);
while(j!=0)
{
 if(j==1)
{
   scanf("%d",&i);
   insert(&main,i);
   scanf("%d",&j);
}

 else if(j==2)
 {
   struct btree *main1;
   main1=main;
   print(main1);
   scanf("%d",&j);
 }

 else if(j==3)
 {
   struct btree *main2;
   main2=main;
   scanf("%d",&h);
   g=printlevel(main2,h,level);
   printf("The level of given node is:%d\n",g);
   scanf("%d",&j);
}
}

 if(j==0)
{
  exit(0);
}
}

 void insert(struct btree **bst,int p)
{
  if((*bst)==NULL)
 {
   *bst=(struct btree*)malloc (sizeof(struct btree));
    (*bst)->data=p;
    (*bst)->left=NULL;
    (*bst)->right=NULL;
  }

 else if(p>(*bst)->data)
 {
     insert(&((*bst)->right),p);
 }
else if(p<(*bst)->data)
 {
     insert(&((*bst)->left),p);
 }
}

void print(struct btree *bst1)
{
  if(bst1==NULL)
 {
  return;
 }
  print(bst1->left);
  printf("%d\n",bst1->data);
  print(bst1->right);
}

 int printlevel(struct btree *bst2,int h,int level)
  {
      if(bst2==NULL)
       {
          return level-1;
       }
      else if(bst2->data==h)
        {
           return level;
        }
    else if(h>bst2->data)
         {
            return printlevel(bst2->right,h,level+1);
         }
    else if(h<bst2->data)
         {
             return printlevel(bst2->left,h,level+1);
         }
  }
            
 
