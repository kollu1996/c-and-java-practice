#include<stdio.h>
int main()
{
  static int num[]={};
  int i,*j;
  j=&num[0];
  while(i<4)
 {
  printf("%d\n",*j);
  j++;
  i++;
}
} 
