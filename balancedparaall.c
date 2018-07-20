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
int balanced(char d[100],int a);
int function(char a,char b);
int isfull(struct stack *stack4);
int isempty(struct stack *stack6);
char pop(struct stack *stack9);
void display(struct stack *stack3);
int main()
{
int p,r,f,i,t=0;
char q,d[100],v,w,x,c;
printf("enter size of stack\n");
scanf("%d%c",&r,&q);
for(i=0;i<r;i++)
{
 scanf("%c",&d[i]);
}

for(i=0;i<r;i++)
{
 printf("%c",d[i]);
}

f=balanced(d,r);
printf("The return value is %d\n",f);
if(f==1)
{
  printf("balanced\n");
}
else
{
 printf("not balanced\n");
}
}


int balanced(char d[],int r)
{
struct stack *stack1;
stack1=initialize_stack(r);
char c;
int i;
for(i=0;i<r;i++)
{
 
 if(d[i]=='('||d[i]=='['||d[i]=='{')
 {
  push(stack1,d[i]);
 }
 else if(d[i]==')'||d[i]==']'||d[i]=='}')
 {
  c=pop(stack1);
  if(!function(c,d[i]))
  return 0;
  
 }
}
if(isempty(stack1))
{
 return 1;
}
else
{
 return 0;
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
  if(isfull((stack3)))
   return;
    
  (stack3)->a[++(stack3)->top]=p;
  printf("Puhed item %c\n",p);
}



int isfull(struct stack *stack4)
{
  return(stack4->top==((stack4->size)-1));
}


int isempty(struct stack *stack6)
{
  return (stack6->top==-1);
}


char pop(struct stack *stack5)
{
 if (isempty(stack5))
 {
  //printf("stack empty\n");
 }
 else
  {
  printf("poped item\n");
  return ((stack5)->a[(stack5)->top--]);
}
}


int function(char character1,char character2)
{
if (character1 == '(' && character2 == ')')
     return 1;
   else if (character1 == '{' && character2 == '}')
     return 1;
   else if (character1 == '[' && character2 == ']')
     return 1;
   else
     return 0;
}
