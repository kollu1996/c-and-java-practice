#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
struct stack
{
  int top;
  int size;
  char *a;
};
void push(struct stack *stack1,char p);
struct stack *initialize_stack(int r);
int isfull(struct stack *stack4);
int isempty(struct stack *stack6);
char pop(struct stack **stack5);
void display(struct stack *stack3);
int main()
{
int p,r,f,i,t=0;
char q,d[100],v;
 v='(';

printf("enter size of stack\n");
scanf("%d%c",&r,&q);
for(i=0;i<r;i++)
{
  
  scanf("%c",&d[i]);
}


struct stack *stack1;
stack1=initialize_stack(r);
 
for(i=0;i<r;i++)
{
 
 if(d[i]==v)
 {
  push(stack1,v);
 }
 else
 {
  pop(&stack1);
 }
}
 
if(isempty(stack1))
{
  printf("Balanced paranthesis\n");
}
else
{
 printf("non balanced paranthesis\n");
}
}

struct stack *initialize_stack(int r)
{
  struct stack *stack2;
  stack2=(struct stack*)malloc(sizeof(struct stack));
  stack2->size=r;
  stack2->top=-1;
  stack2->a=(char *)malloc((stack2->size)*sizeof(char));
  return stack2;
}

 void push (struct stack *stack3,char p)
{
  if(isfull(stack3))
   return;
    
  stack3->a[++stack3->top]=p;
  //printf("Puhed item %c\n",p);
}

int isfull(struct stack *stack4)
{
  return(stack4->top==((stack4->size)-1));
}

int isempty(struct stack *stack6)
{
  return (stack6->top==-1);
}

char pop(struct stack **stack5)
{
 if (isempty(*stack5))
  printf("stack empty\n");
  return ((*stack5)->a[(*stack5)->top--]);
}
