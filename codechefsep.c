
 #include<stdio.h>
 int main()
{
  long int t,a[100000],h2,h1,min,i,j,k,h;
  scanf("%ld",&t);
 while(h2<t)
 {
  scanf("%ld",&j);
  for(i=0;i<j;i++)
 {
   scanf("%ld",&a[i]);
 }
 
 
 min=a[0];
 h1=0;
for(h=1;h<j;h++)
 {
   if(a[h]<min)
  {
   min=a[h];
   h1=h;
  }
 }
printf("%ld\n",h1+1);

h2++;
}
}

