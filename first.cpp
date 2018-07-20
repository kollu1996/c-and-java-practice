# include<iostream>
#include <cstdlib>
using namespace std;
/*int main()
{
char a= 'A';
int b=97;
float c = 20.123;
double d = 30.4567;
a=b;
b=c;
c=d;
d=a;
cout << a << " , " << b <<" , "<< c << " , " <<d<<endl;
}*/



/*struct container
{
    int x;
};
void swap(struct container *c1,struct container *c2)
{
    struct container *temp;
    temp=c2;
    c2=c1;
    c1=temp;
}
int main()
{
    struct container a;
    a.x=34;
    struct container b;
    b.x=76;
    cout<< b.x <<" "<< a.x << endl;
    swap(&a,&b);
    cout<< b.x <<" "<< a.x << endl;
    
}*/

void array(int[],int,int);
int main()
{
 const int arraysi =10;
 int a[arraysi] = {1,2,3,4,5,6,7,8,9,10};
 cout << "array are:" << endl;
array (a,0,arraysi);
cout << endl;
//system("pause");
return 0;
}
void array(int b[],int current,int size)
{
  if (current < size)
   {
     array(b,current+1,size);
     cout << b[current] << "";
    }
 }
/*int main()
{
int x[] = { 10,20,30,40 };
int y[] = { 10,20,30,40};
int *a = &x[0];
int *b = &y[0];
a++;
++*b;
a++;
b++;
a++;
*a= *(--b) + (*a--);
b++;
*b = *(--a) + (++*b);
cout << x[2];
return 0;
}*/


