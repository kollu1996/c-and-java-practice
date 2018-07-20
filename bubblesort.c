

 #include<stdio.h>
 
 void sort(int arr[],int k);
 
 int main()
{

int k,arr[10000],s,length,i;
scanf("%d",&length);
for(i=0;i<length;i++)
{
  scanf("%d",&arr[i]);
}
sort(arr,length);
for(i=0;i<length;i++)
{
  printf("%d\n",arr[i]);
 }
}


void sort(int arr[],int p)
{
  int i,j,k,temp;
  for(i=0;i<p;i++)
   {
      for(j=i+1;j<p;j++)
       {
          if(arr[i]>arr[j])

          {
               temp=arr[i];
               arr[i]=arr[j];
               arr[j]=temp;
           }
       }
    }
}


