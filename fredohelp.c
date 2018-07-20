#include<stdio.h>
#include<stdlib.h>
#include<math.h>
double nthroot(double,double);

 int main()
{
double a[100000],h,q,p,b,product,k,r,g,f,product1,n[100000],m=1.0;
long int i,z,w;
product=1.0;
product1=1.0;
scanf("%lf",&b);
 for(i=0;i<b;i++)
{
 scanf("%lf",&a[i]);
 n[i]=nthroot(product*a[i],b);
}
for(i=0;i<b;i++)
{
 m=m*n[i];
}
/*if(product > (pow(10,18)))
{
  (product) = (product) / (pow(10,18));
}*/
q=floor(m);
/*r=floor(m);
g=pow(q,b);
f=pow(r,b);
z=(int)q;*/
r=q+1.0;
w=(int)r;

  printf("%ld\n",w);
  exit(0);
}

double nthroot(double a,double b)
{
double h,k;
 h=(1/b);
 k=pow(a,h);
 return k;
}


