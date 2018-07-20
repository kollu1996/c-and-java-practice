import java.util.*;
public class Codechef
{
  public static void main(String[] args)
{
  int r,s,l,r1,t,t1,h,s1,s2;
  long count=0,p=0,k1;
  float q;
  Scanner sc = new Scanner(System.in);
  t=sc.nextInt();
 for(t1=0;t1<t;t1++)
{
  r=sc.nextInt();
  r1=sc.nextInt();
 long []a = new long[r];
 for(s=0;s<r;s++)
{  
  a[s]=sc.nextLong();
  p=p+a[s];
}
 
  Codechef p1 = new Codechef();
q=p1.divide(p,r);
 p=0;
 l=(int)q;
 
  if(l-q!=0)
{
  System.out.println(-1);
 }
 else
{
 
 for(s=0;s<=r1;s++)
  {
    for(s1=s;s1<r-r1;s1++)
      {
      s2=s1+r1;
     if(a[s1]>a[s2])
       { 
          if(a[s1]>=l&&a[s2]!=l)
           {
                k1=a[s1]-l;
           count=count+k1;
              a[s1]=a[s1]-k1;
              a[s2]=l;
             }
         }
    else if(a[s1]<a[s2])
         {
          if(a[s2]>=l&&a[s1]!=l)
           {       
               k1=a[s2]-l;
                 count=count+k1;   
             a[s1]=l;
             a[s2]=a[s2]-k1;
           }
          }
     }
   }

 for(s=0;s<r1;s++)
  {
    if(a[r-s-1]!=l)
      { 
         System.out.println(-1);
           break;
      }
  }
 
  if(s==r1)
  {
     System.out.println(count);
  }
}
       
        
 
 /*h=p1.check(a,r,l,r1);
  if(h==1)
{
 for(s=0;s<r;s++)
{
  if(a[s]<l)
  {  
    count=count+(l-a[s]);
  }
}
System.out.println(count);
}
else
{
 System.out.println(-1);
}
}*/
 count=0;
}
}

public float divide(long p,int r)
{
  float c,a;
  a=(float)p/r;
 
  return a;
}

public int check(long []a,int p,int l,int q)
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
  return -1;
}

}
 
 
  
