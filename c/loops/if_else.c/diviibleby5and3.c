#include<stdio.h>
int main()
{   int n;
    printf("Enter the lenght");
    scanf("%d",&n);
    int a;
    int b;
    int m;
    while(n<=1000){
        a=n/1000;
        b=n%1000;
        m=2;
    
    printf("The km is %d and meter is %d ",a,b);
    }
   return 0;

}