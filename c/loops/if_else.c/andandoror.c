#include <stdio.h>
int main()
{
   int a[5]={10,2,3,4,5};
   int *p;
   int *t;
   p=&a[3];
   t=a+4;
   int c=*p;
   int m=*t;
   printf("%d\n",c);
   printf("%d\n",*(a+4));
   printf("%d",*a);
}