#include<stdio.h>
int fact(int n){
     int a=1;
     if(n==1 || n==0) return 1;
      return n*fact((n-1));
}
int main()
{
    int n;
    printf("Enter a number :");
    scanf("%d",&n);
    fact(n);
    printf("factorail of %d is %d ",n,fact(n));
}