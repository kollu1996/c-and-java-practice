#include<stdio.h>
#include<stdlib.h>
int main()
{
  char *a,c;
  int i=0,p=1;
  a=(char *)malloc(sizeof(char));
  //scanf(" %c",&c);
  while(c!='\n')
  {
    scanf("%c",&c);
    a=(char *)realloc(a,p*sizeof(char));
    a[i]=c;
    //printf("%c\n",a[i]);
    i++;
    p++;
  }
  a[i]='\0';
  printf("%s",a);
  free(a);
}
