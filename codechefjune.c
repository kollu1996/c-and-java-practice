#include<stdio.h>
#include<stdlib.h>
int main()
{
 int i,j,k,l,a[15],p=0,q=1,s,b[100],r=0,t=0,m,z,g=0,f;
 scanf("%d",&l);
 z=l;
 a[0]=1;
 a[1]=2;
 a[2]=4;
 a[3]=7;
 a[4]=12;
 a[5]=20;
 a[6]=33;
 a[7]=54;
 a[8]=88;
 a[9]=143;

 while(l>0)
 {
  scanf("%d",&m);
  b[r]=m;
  l--;
  r++;
 }

 while(t<z)
{
 s=b[t];
 for(k=0;k<s;k++)
 {
   printf("%d\n",a[k]);
 }
t++;
}
}
