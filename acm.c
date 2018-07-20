#include<stdio.h>
int main()
{
int testcase,n,i,j,k,l,m;
scanf("%d",&testcase);

for(l=0;l<testcase;l++)
{
        scanf("%d",&n);
        int a[n];
        for(m=0;m<n;m++)
	scanf("%d",&a[m]);
	for(i=0;i<n-1;i++)
      {

        for(j=i+1;j<n;j++)
     
     {
      for(k=0;k<n;k++)
     {
       if(a[k]==a[i]*a[j])
{
      break;
       
       
  }

}
}}
if(i==n-1)
{
 printf("no\n");
 
}
else
{
 printf("yes\n");
 
}
}
return 0;
}
