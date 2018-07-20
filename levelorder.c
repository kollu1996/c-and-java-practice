#include<stdio.h>
int main()
{

 fun(tree)
 {
  if(tree!=NULL)
 {
  enqueue(tree);
 }
  p=dequeue(tree)
  printf("%d\n",p->data);
  fun(tree->left);
  fun(tree->right);
 }

 
