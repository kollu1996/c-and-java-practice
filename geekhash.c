#include<stdio.h>
#include<stdlib.h>
int main()
{
 int i,j,k,a[100],b[100],value,sum=0,t,value1,z1,z;
 scanf("%d",&z);
 for(z1=0;z1<z;z1++)
{
 scanf("%d",&j);
 for(i=0;i<j;i++)
  {
    scanf("%d",&a[i]);
  }

  for(i=0;i<j;i++)
  {
   sum=sum+a[i];
   b[i]=sum;
  }

 for(i=0;i<j;i++)
 {
  if (b[abs(b[i])] >= 0)
      b[abs(b[i])] = -b[abs(b[i])];
    else
  {
      value=i;
      value1=b[i];
  }
 }
 for(i=0;i<j;i++)
 {
   if(b[i]==value1)
    {
      t=i;
     break;
    }
  }
 printf("%d\n",value-t);
}
return 0;
}

