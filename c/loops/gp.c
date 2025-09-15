#include<stdio.h>
int main (){
    float a=100;
    int n;
    printf("enter value :");
    scanf("%d",&n);
    for (int i=1; i<=n; i++)
    
    {printf("%f\n",a);
    a=a/2;}
  
    return 0;
}