#include<stdio.h>
#include<stdlib.h>

struct btree
{
 int a;
 struct btree *left;
 struct btree *right;
};
void insert(struct btree* *hd,int q);
struct btree *search (struct btree* *hd3,int k);
struct btree *min(struct btree* *hd3);
struct btree  *max(struct btree* *hd3);
void pred(struct btree* *hd3);
void suce(struct btree* *hd3);
void inorder(struct btree* *hd3);
struct btree *delete(struct btree* *hd3,int q);
int main()
{
struct btree *hd=NULL;
struct btree *hd1, *hd2;
int k,p=1,l,j,s,q;
scanf("%d",&p);

while(1)
{
   if(p==1)
 {
  scanf("%d",&k);
  insert(&hd,k);
  scanf("%d",&p);
  }

if(p==0)
{
 inorder(&hd);
scanf("%d",&p);
}
 else if(p==143)
 {
   scanf("%d",&l);
   if(hd==NULL)
  {
   printf("NOT FOUND\n");
  }
  struct btree *hd5=NULL;
  hd5=search (&hd,l);
   if(hd5==NULL)
   {
    printf("NOT FOUND\n");
   }
  else if(hd5->a==l)
  {
    printf("FOUND\n");
  }
 scanf("%d",&p);
}

else if(p==369)
{
   struct btree *hd9;
   if(hd==NULL)
  {
   printf("NOT FOUND\n");
  }
  hd9=min(&hd);
  printf("%d\n",hd9->a);
  scanf("%d",&p);
}
else if(p==786)
{
  struct btree *hd8;
  if(hd==NULL)
  {
  printf("NOT FOUND\n");
  }
hd8= max(&hd);
 printf("%d\n",hd8->a);
 scanf("%d",&p);
}
else if(p==999)
 {
   scanf("%d",&j);
   
   struct btree *hd3,*hd4;
   
   hd3=hd;
   hd4=search(&hd3,j);
   if(hd4->left==NULL)
    {
      printf("NO PREDECESSOR\n");
     }
   pred(&(hd4->left));
  scanf("%d",&p);
}
else if(p==1000)
  {
    scanf("%d",&s);
   
   struct btree *hd3,*hd4;
   
   hd3=hd;
   hd4=search(&hd3,s);
   if(hd4->left==NULL)
    {
      printf("NO PREDECESSOR\n");
     }
   pred(&(hd4->right));
  scanf("%d",&p);
}
else if(p==1001)
{
   struct btree *hd10;
   scanf("%d",&q);
 hd10= delete(&hd,q);
 scanf("%d",&p);
}
else if(p==500)
{
  exit(0);
}
}
}
void insert(struct btree* *hd,int k)
{
  struct btree* curr=*hd;
  if(curr==NULL)
{
  curr = (struct btree*)malloc(sizeof(struct btree));
  curr->a=k;
  curr->left=curr->right=NULL;
  *hd=curr;
}
 else
{
  if(k<curr->a)
 {
  insert(&curr->left,k);
 }
 else
 {
   insert(&curr->right,k);
 }
}
}

struct btree *search (struct btree* *hd3,int k)
{
   if(hd3==NULL)
   {
     printf("NOT FOUND\n");
     exit(0);
   }
   struct btree *hd4=NULL;
   struct btree *hd5=NULL;
   hd4=*hd3;
   hd5=*hd3;
  if(hd4!=NULL)
   {
        if(hd4->a==k)
          {
              return (hd4);
          }
     
    if(k<hd4->a)
   {
    search (&(hd4->left),k);
    }
   else if(k>hd4->a)
    {
    search (&(hd4->right),k);
     }
}
}

struct btree *min(struct btree* *hd3)
{
   struct btree *hd4;
   hd4=*hd3;
   if(hd4->left==NULL)
   {
     return hd4;
   }
  else
   {
     min(&hd4->left);
   }
 }

 struct btree  *max(struct btree* *hd3)
 {
   struct btree *hd4;
   hd4=*hd3;
   if(hd4->right==NULL)
   {
     return hd4;
   }
  else
   {
     max(&hd4->right);
   }
 }

 void pred(struct btree* *hd3) /* RIGHMOST OF LEFT SUBTREE */
  {
   
   struct btree *hd4;
   hd4=*hd3;
  if(hd4->right==NULL)
   {
     printf("%d\n",hd4->a);
   }
  else
   {
     pred(&hd4->right);
   }
 }

 void suce(struct btree* *hd3) /* LEFTMOST OF RIGHT SUBTREE */
  {
   
   struct btree *hd4;
   hd4=*hd3;
  if(hd4->left==NULL)
   {
     printf("%d\n",hd4->a);
   }
  else
   {
     suce(&hd4->left);
   }
 }

 struct btree* delete(struct btree* *hd3,int q)
 {
   
    //if ((* hd3)==NULL) printf(";
    
    struct btree *hd4;
    hd4=*hd3;

      if (q < hd4->a)
       hd4->left= delete(&(hd4->left), q);
 
    
    else if (q > hd4->a)
      hd4->right= delete(&(hd4->right), q);
 
    
    else
    {

        // node with only one child or no child
        if (hd4->left == NULL)
        {
            struct btree *hd5 = hd4->right;
            hd4=hd5;
            free(hd5);
            return hd4;
        }
        else if (hd4->right == NULL)
        {
            struct btree *hd5 = hd4->left;
            hd4=hd5;
            free(hd5);
            return hd4;
        }
        struct btree* hd5 = min(&(hd4->right));
       (hd4->a) = hd5->a;
 
        
      hd4->right=delete((&hd4->right), hd5->a);
    }
    return hd4;
}

 void inorder(struct btree* *hd3)
 {
  struct btree* hd4=*hd3;
   if(hd4==NULL)
  {
   return ;
  }
  printf("%d\n",hd4->a);
  inorder(&(hd4->left));
  inorder(&(hd4->right));
 }
   
   
       
 






 
