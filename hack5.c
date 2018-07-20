#include<stdio.h>
int main()
{
 long int i,j,k,a[1000],b[1000],l;
scanf("%ld",&k);
for(l=0;l<k;l++)
{
 scanf("%ld",&a[l]);
 scanf("%ld",&b[l]);

}
for(l=0;l<k;l++)
{
 if(b[l]%2!=0&&a[l]%2!=0)
  {
    printf("Alice\n");
  }
 else
 {
   printf("Bob\n");
 }
}
}
