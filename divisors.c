#include<stdio.h>
#include<math.h>
int main()
{
 long int d,k, p=0,q=0,r=0,a[100],b[100],c[100],t,f[100],n,g,count=0,m;
 scanf("%ld",&g);
 
for(d=0;d<g;d++)
{
  scanf("%ld",&n);
 for (int i=1; i<=sqrt(n)+1; i++)
    {
        if (n%i==0)
        {
            
            if (n/i == i)
               
               {
                a[p]=i;
                p++;
              }
                
 
            else 
              {
               
                b[q]=i;
                q++;
               c[r]=n/i;
                r++;
              }
        }
    }
  for(t=0;t<p;t++)
 {
   if((a[t]%2)==0)
   {
    count++;
   /*printf("%d\n",a[t]);*/
   }
  }
  for(t=0;t<q;t++)
 {
   if((b[t]%2)==0)
   {
    count++;
   /*printf("%d\n",b[t]);*/
  }
}
  for(t=0;t<r;t++)
 {
  if((c[t]%2)==0)
   {
    count++;
   /*printf("%d\n",c[t]);*/
  }
  }
f[m]=count;
m++;
count=0;
}

for(p=0;p<m;p++)
{
  printf("%ld\n",f[p]);
}

}
   
