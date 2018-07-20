#include<stdio.h>
#include<math.h>
long long int proddiv(long long int n);
long long int numoffac(long long int n);
int main()
{
long long  int i,j,k=1,isPrime,h=0,b[1000000],m,n,k1,k2;
 int p2;
 
 for(i=2; i<=1000000; i++)
    {
       isPrime = 1; 
     for(j=2; j<=sqrt(i); j++)
        {
            
            if(i%j==0)
            {
                isPrime = 0;
                break;
            }
        }

        if(isPrime==1)
        {
            b[h]=i;
            h++;
        }
   }
  scanf("%lld",&m);
 
  for(n=0;n<m;n++)
   {
     scanf("%d",&p2);
      k=k*pow(b[n],p2);
   }

   
  

k1=proddiv(k);
k2=numoffac(k1);
printf("%lld\n",k2);
}


 long long int numoffac(long long int n)
    {
        long long int count=0;
       for (long long int i=1; i<=sqrt(n); i++)
    {
        if (n%i==0)
        {
            
            if (n/i == i)
               {
                 count++;
               }
 
            else 
               {
                 count++;
                 count++;
               }
        }    
    }
   return count;
  }

 
  long long int proddiv(long long int n)
    {
         long long int k=1;
       for (long long int i=1; i<=sqrt(n); i++)
    {
        if (n%i==0)
        {
            
            if (n/i == i)
               {
                k=k*i;
               }
 
            else 
               {
                   k=k*i;
                   k=k*(n/i);
               }
        }    
    }
   return k;
  }
 
 
      
 




