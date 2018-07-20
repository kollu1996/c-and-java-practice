#include<stdio.h>
#include<string.h>
int main()
{
 int i,j,k,a[26],sum=0;
 char b[100];
 scanf("%s",b);
 for(i=0;i<26;i++)
 {
   a[i]=0;
 }

 k=strlen(b);
 for(j=0;j<k;j++)
 {
    a[(b[j]-97)]++;
 }

 for(j=0;j<k;j++)
 {
   if(a[(b[j]-97)]==1)
   {
     printf("%c",b[j]);
    break;
   }
 }
}

 
