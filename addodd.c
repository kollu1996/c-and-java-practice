
 #include<stdio.h>
 #include<math.h>
 #include<stdlib.h>
 long  long  int fun( long long  int z);
 int main()
{
long long  int p,q,n,g,f,h,k,m=0;
 int *a;
scanf("%lld",&f);
for(h=0;h<f;h++)
{
scanf("%lld",&n);
q=sqrt(n);
for(p=1;p<=q;p++)
 {
   if(n%p==0)
    {
      if(n/p==p)
       {
         m=m+fun(p);
       }
      else if(n/p!=p)
      {
      m=m+fun(p);
      m=m+fun(n/p);
     }
   }
 }
 printf("%lld\n",m);
m=0;
}
}

long long int fun(long long int i)
 {
  long long  int k,l,h=0;
  while(i>0)
 {
  k=i%10;
  i=i/10;
  if(k%2==1)
 {
   h=h+k;
 }
 }
 return h;
}


