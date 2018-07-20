#include<stdio.h>
int main()
{
 int i,j,k,t,r,w,g;
 char a[22]={'b','c','d','f','g','h','j','k','l','m','n','p','q','r','s','t','v','w','x','z','\0'};
 char b[6]={'a','e','i','o','u','\0'};
 scanf("%d",&k);
if(k==1)
{
 for(i=0;i<20;i++)
 {
   
    printf("%c\n",a[i]);
    if(i<5)
   {
     printf("%c\n",b[i]);
   }

  }
}
else if(k==2)
{
  for(i=0;i<20;i++)
 {
   for(j=0;j<5;j++)
   {
     printf("%c",a[i]);
     printf("%c\n",b[j]);
   }
 }
}

else if(k==3)
{

 for(t=0;t<20;t++)
 {
  for(j=0;j<5;j++)
 {
    for(i=0;i<20;i++)
   {
      printf("%c",a[t]);
      printf("%c",b[j]);
      printf("%c\n",a[i]);
   }
 }
}
 for(i=0;i<5;i++)
 {
  for(t=0;t<20;t++)
 {
   for(j=0;j<5;j++)
   {
     printf("%c",b[i]);
     printf("%c",a[t]);
     printf("%c\n",b[j]);
     
   }
 }
}
}

else if(k==4)
{
  for(r=0;r<5;r++)
   {
    for(t=0;t<20;t++)
 {
  for(i=0;i<5;i++)
 {
   for(j=0;j<20;j++)
   {
     printf("%c",b[j]);
     printf("%c",a[t]);
     printf("%c",b[i]);
     printf("%c\n",a[r]);
   }
 }
}
}
  for(r=0;r<20;r++)
   {
    for(t=0;t<5;t++)
 {
  for(i=0;i<20;i++)
 {
   for(j=0;j<5;j++)
   {
     printf("%c",a[j]);
     printf("%c",b[t]);
     printf("%c",a[i]);
     printf("%c\n",b[r]);
   }
 }
}
}
}


else if (k==5)
{
  for(w=0;w<20;w++)
  {
    for(r=0;r<5;r++)  
       {
         for(t=0;t<20;t++)
           {
              for(j=0;j<5;j++)
              {
             for(i=0;i<20;i++)
             {
              printf("%c",a[w]);
              printf("%c",b[r]);
	      printf("%c",a[t]);
	      printf("%c",b[j]);
	      printf("%c\n",a[i]);
           }
         }
     }
  }
}

for(w=0;w<5;w++)
  {
    for(r=0;r<20;r++)  
       {
         for(t=0;t<5;t++)
           {
              for(j=0;j<20;j++)
              {
             for(i=0;i<5;i++)
             {
              printf("%c",b[w]);
              printf("%c",a[r]);
	      printf("%c",b[t]);
	      printf("%c",a[j]);
	      printf("%c\n",b[i]);
           }
         }
     }
  }
}
}

else if(k==6)
{
for(g=0;g<20;g++)
{
for(w=0;w<5;w++)
  {
    for(t=0;t<20;t++)
     {
       for(i=0;i<5;i++)
       {
          for(r=0;r<20;r++)
           {
             for(j=0;j<5;j++)
              {
                printf("%c\n",a[g]);
                printf("%c\n",b[w]);
               printf("%c\n",a[j]);
	      printf("%c\n",b[i]);
	     printf("%c\n",a[r]);
	     printf("%c\n",b[t]);
           }
         }
     }
  }
}
}

for(g=0;g<5;g++)
{
for(w=0;w<20;w++)
  {
    for(t=0;t<5;t++)
     {
       for(i=0;i<20;i++)
       {
          for(r=0;r<5;r++)
           {
             for(j=0;j<20;j++)
              {
                printf("%c\n",b[g]);
                printf("%c\n",a[w]);
               printf("%c\n",b[j]);
	      printf("%c\n",a[i]);
	     printf("%c\n",b[r]);
	     printf("%c\n",a[t]);
           }
         }
     }
  }
}
}
}

}



 
              



       


  
