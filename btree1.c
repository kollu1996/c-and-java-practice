#include<stdio.h>
#include<stdlib.h>

 
struct btree
{
 int data;
 struct btree *right,*left;
};
void insert(struct btree* *tree2,int k);
void inorder(struct btree* tree1);
int predecessor(struct btree *tree2,int p);
void leftview(struct btree *tree3,int a,int *b);
int main()
{
 int p,k,s,t,r=0;
 struct btree *tree;
 tree=NULL;
 scanf("%d",&p);
 while(p==1)
{
 scanf("%d",&k);
 insert(&tree,k);
  scanf("%d",&p);
 if(p==2)
 {
inorder(tree);
 scanf("%d",&p);
 }
else if(p==3)
{
 scanf("%d",&s);
 t=predecessor(tree,s);
 printf("%d\n",t);
}
else if (p==4)
{
 leftview(tree,1,&r);
 printf("hai.........\n");
}
}
}
 
 
void insert(struct btree* *tree,int k)
{
 struct btree *tree1=*tree;
  if(tree1==NULL)
{
 tree1=(struct btree *)malloc(sizeof(struct btree));
   tree1->data=k;
   tree1->left=NULL;
   tree1->right=NULL;  
   *tree=tree1;
}
 else if(k>tree1->data)
  {
    insert(&tree1->right,k);
  }
 else if(k<tree1->data)
  {
   insert(&tree1->left,k);
  }
}

void inorder(struct btree* tree1)
{
  if(tree1==NULL)
  {
  return;
  }
  inorder(tree1->left);
  printf("%d ",tree1->data);
  inorder(tree1->right);
}

int predecessor(struct btree *tree2,int k)
{
  struct btree *tree3;
  tree3=tree2->left;
  while(tree3->right!=NULL)
  {
    tree3=tree3->right;
   }
  return tree3->data;
}
void leftview(struct btree *tree4,int p,int *q)
{
  if(tree4==NULL)
{
  return ;
}
printf("the values of p and q are %d %d\n",p,*q);
  if(*q<p)
{
  printf("%d\n",tree4->data);
  *q=p;
}
   leftview(tree4->left,p+1,q);
   leftview(tree4->right,p+1,q);
}
     
