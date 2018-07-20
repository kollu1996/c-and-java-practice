#include<stdio.h>

int main()

{
   
   float interest,k,amount,time,i,j,l;

  scanf("%f",&amount);

   scanf("%f",&time);

   scanf("%f",&interest);
l=interest/100;
printf("%f\n",l);
 i=l*(amount)*(time);
j=i+amount;
k=j/time;

printf("annual payment of loan is - %f\n",k);

}
