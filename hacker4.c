
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
long int a[1000000];
long int find(int p,int q);
int main()
{
long int i,j,k,l,m,n,b[1000000],t;
scanf("%ld",&j);
for(i=1;i<=j;i++)
{
 scanf("%ld",&a[i]);
}
scanf("%ld",&n);
t=n;
while(n!=0)
{
scanf("%ld%ld",&k,&l);
m=find(k,l);
if((m%2)==0)
{
b[n]=0;
}
else if((m%2)!=0)
{
  b[n]=1;
}
n--;
}
while(t!=0)
{
   if(b[t]==0)
  {
   printf("Even\n");
  }
 else if(b[t]==1)
  {
   printf("Odd\n");
 }
  t--;
}
}

long int find(int x,int y)
{
 long int ans;
 if(x>y) return 1;
    ans = pow(a[x],find(x+1,y));
    return ans;
}


