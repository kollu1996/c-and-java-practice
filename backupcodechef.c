int fun(char a[],int i)
{
int k,l;

if(a[0]=='E')
{
 return 0;
}
l=i;
for(k=0;k<l;k++)
{
  if(a[k]=='S'&& k!=(l-1))
  {
    return 0;
   }
 }
return 1;
}

for(k=0;k<m;k++)
{
  if(j[k]==1)
   {
     printf("yes\n");
   }
  else if(j[k]==0)
  {
    printf("no\n");
  }
}







