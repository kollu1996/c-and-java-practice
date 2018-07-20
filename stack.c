#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
struct stack
{
  int top;
  int size;
  int *a;
};
void push(struct stack *stack1,int p);
struct stack *initialize_stack(int r);
int isfull(struct stack *stack4);
int isempty(struct stack *stack6);
int pop(struct stack **stack5);
void display(struct stack *stack3);
int main()
{
int p,q,r;
printf("enter size of stack\n");
scanf("%d",&r);
struct stack *stack1;
stack1=initialize_stack(r);

scanf("%d",&p);
while(p!=0)
{
 if(p==1)
{
 scanf("%d",&q);
 push(stack1,q);
 scanf("%d",&p);
}
 else if(p==2)
{
  int s;
  s=pop(&stack1);
 printf("pooped %d\n",s);
 scanf("%d",&p);
 }
else if(p==3)
{
 struct stack *stack10;
  stack10 = stack1;
  int k=stack10->top;
  while(k!=-1)
{
   printf("%d\n",stack10->a[k--]);
}
  scanf("%d",&p);
}
}
}

struct stack *initialize_stack(int r)
{
  struct stack *stack2;
  stack2=(struct stack*)malloc(sizeof(struct stack));
  stack2->size=r;
  stack2->top=-1;
  stack2->a=(int *)malloc((stack2->size)*sizeof(int));
  return stack2;
}

 void push (struct stack *stack3,int p)
{
  if(isfull(stack3))
   return;
    
  stack3->a[++stack3->top]=p;
  printf("Puhed item %d\n",p);
}

int isfull(struct stack *stack4)
{
  return(stack4->top==((stack4->size)-1));
}

int isempty(struct stack *stack6)
{
  return (stack6->top==-1);
}

int pop(struct stack **stack5)
{
 if (isempty(*stack5))
  printf("stack empty\n");
  return ((*stack5)->a[(*stack5)->top--]);
}
