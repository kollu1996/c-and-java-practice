#include<stdio.h>
#include<stdlib.h>
struct stack
{
 int *a;
 int capacity;
 int top;
};
int isempty(struct stack * temp1);
struct stack *func1(int size);
int main()
{
  int i,j,k;
  scanf("%d",&k);
  struct stack *main = func1(k);
  scanf("%d",&i);
  while(1)
{
  if(i==1)
 {
    scanf("%d",&j);
   if(!isempty(main))
    {
      main->a[++main->top]=j;
      printf("Item got entered in stack\n");
     }
    else
     {
     printf("I am sorry\n");
   }
  scanf("%d",&i);
 }
 else if(i==2)
 {
    printf("%d\n",main->a[main->top]);
    scanf("%d",&i);
 }
 else if(i==3) 
 {
   if(isempty(main))
   {
      printf("I am sorry i cannot do that\n");
   }
  else
 {
  printf("removed %d\n", main->a[main->top--]);
 }
 scanf("%d",&i);
}
 if(i==4)
{
  break;
}
 }
}

struct stack *func1(int size)
  {
  struct stack *node = (struct stack*)malloc(sizeof(struct stack));
   node->top=-1;
   node->capacity=size;
   node->a = (int*) malloc(node->capacity * sizeof(int));
   return node;
  }

int isempty(struct stack * temp1)
{
  if(temp1->capacity-1==temp1->top)
  {
     return 1;
  }
  else
  {
   return 0;
  }
}
    
