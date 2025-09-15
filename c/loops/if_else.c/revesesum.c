#include<stdio.h>
int main (){
    int n;
    printf("enter a number :");
    scanf("%d",&n);
    int k=n;
    int r=0;
    while (n!=0)
    {int ld=n%10;
       r=r*10;
       r=r+ld;
       n=n/10;
    }
       
int sum =r+k;
printf("%d",sum );
return 0;

}