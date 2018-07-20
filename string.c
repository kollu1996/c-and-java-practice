
 #include <stdio.h>
  #include <string.h>
  #include <stdlib.h>
 int main()
{
  char *a;
  int p;
  a=(char*)malloc(10*(sizeof(char)));
  fgets(a,7,stdin);
  p=strlen(a)-3;
 a[p]='\0';
 printf("%s",a);
  
}
