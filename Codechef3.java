import java.util.*;

    
    int check(int []a,int p,int l,int q)
 {
   int s,r;
 for(r=0;r<p;r++)
 {
    s=r+q;
   if(a[r]<l&&a[s]<l)
  {
      return -1;
  }
 else if(a[r]>l&&a[s]>l)
{
  return -1;
}
else 
{
 return 1;
}
}
}
    
   
