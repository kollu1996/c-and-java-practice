#include<stdio.h>
#include<math.h>
int main()
{
 long long int p,q,r,a[300000],var1=10,var2=20;
  p=1000000000000000000;
  scanf("%lld",&q);
  for(r=0;r<=q;r++)
  {
     scanf("%lld",&a[r]);
   }
  if(q>=1)
  {
   var1=a[0]+a[1]*p;
   var2=a[0]-a[1]*p;
  }
   for(r=2;r<=q;r++)
    {
     if(r%2==0) 
      {
        var1=var1+(a[r]*pow(p,r));
        var2=var2+(a[r]*pow(p,r));
      }
    else
    {
     var1=var1+(a[r]*pow(p,r));
      var2=var2-(a[r]*pow(p,r));
    }
  }
  if(var1>0)
  {
    printf("%d\n",1);
  }
  else if(var1<0)
   {
    printf("%d\n",-1);
   }
  else if(var1==0)
  {
      printf("%d\n",0);
   }

  if(var2>0)
  {
    printf("%d\n",1);
  }
  else if(var2<0)
   {
    printf("%d\n",-1);
   }
  else if(var2==0)
  {
      printf("%d\n",0);
   }
}
