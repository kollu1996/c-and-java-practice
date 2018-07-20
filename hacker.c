
 #include<stdio.h>
 #include<stdlib.h>
 void find_similar_pair(int arr[],int p);
 void delete(int k,int a[],int l);
 int main()
{

int k,arr[500],s,length,i;
scanf("%d",&length);
 if(length>500||length<1)
{
  exit(1);
}
for(i=0;i<length;i++)
{
  
  scanf("%d",&arr[i]);
  if(arr[i]>100||arr[i]<1)
   {
       exit(1);
   }
}
find_similar_pair(arr,length);
}




void find_similar_pair(int arr[],int p)
{
 int j=0,k,l=0,s=0,t,v,i;

while(j<p)
{
for(k=j+1;k<p;k++)
{
 if(arr[j]==arr[k])
{
   
   l=l+1;
}
else
{
  break;
}
}
printf("\n");
v=l+1;
printf("%d-%d\n",arr[j],v);
/*if(v==1)
{
  s=s+1;
  delete(v,arr,p);
}
else if((v%2)==0)
{  v=arr[j];
  delete(v,arr,p);
}
else if((v%2)==1)
{
  s=s+1;
  t=arr[j];
  delete(t,arr,p);
}*/
j=j+l+1;
l=0;
}
}







void delete(int t,int arr[],int p)
{
    int i,pos,found;
								    
    for (i = 0; i < p; i++)
    {
        if (arr[i] == t)
        {
            found = 1;
            pos = i;
            break;
        }
    }
    if (found == 1)
    {
        for (i = pos; i <  p - 1; i++)
        {
            arr[i] = arr[i + 1];
        }
    }
}




   
