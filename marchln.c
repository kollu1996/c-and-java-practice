 #include<stdio.h>
 #include<stdlib.h>
int minimum(int c,int d);
void fun1();

 int main()
{
int x,u,e;
scanf("%d",&u);
if(u<1||u>10)
{
 exit(0);
}

for(x=0;x<u;x++)
{
fun1();
}
}

void fun1()
{
int i=0,j,k=0,p,a[100],b[100],l,s,x,y,h,e,g=0,u=0,v=0;
 scanf("%d",&e);
if(e<1||e>3)
{
  exit(0);
}
for(p=0;p<3;p++)
 {
 scanf("%d",&a[p]);
 if(a[p]<1||a[p]>100000)
  {
     exit(0);
  }
  }
  for(s=0;s<e;s++)
 {
 scanf("%d",&b[s]);
 if(b[s]<1||b[s]>100000)
  {
     exit(0);
  }
  }
  
 for(i=0; i<e; i=i+2)
 {
 k=k+a[i];
 u=u+b[i];
 }
  for(j=1;j<3;j=j+2)
  {
    g=g+b[j];
    v=v+a[j];
  }
x=k+g;
y=u+v;
h=minimum(x,y);
printf("%d\n",h);
}

int minimum(int a,int b)
{
  if(a>b)
  {
     return (b);
  }
 else
  {
     return (a);
  }
}


