 #include<stdio.h>
  #include<math.h>
 int printDivisors(int n);
 int f[100],z;
 int main()
{
  int k,l,a,b=1,count=0,t,m,z[180];
 scanf("%d",&m);
 for(t=0;t<m;t++)
{
 scanf("%d",&a);
z[t]=printDivisors(a);
}

for(t=0;t<m;t++)
{
 printf("%d\n",z[t]);
}

}

int printDivisors(int n)
{
  int p=0,q=0,r=0,a[100],b[100],c[100],t,count=0,count1=0,count2=0,count3=0,m=0;
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
    count1++;
   /*printf("%d\n",a[t]);*/
   }
  }
  for(t=0;t<q;t++)
 {
   if((b[t]%2)==0)
   {
    count2++;
   /*printf("%d\n",b[t]);*/
  }
}
  for(t=0;t<r;t++)
 {
  if((c[t]%2)==0)
   {
    count3++;
   /*printf("%d\n",c[t]);*/
  }
  }
 count=count1+count2+count3;
 return(count);
}
