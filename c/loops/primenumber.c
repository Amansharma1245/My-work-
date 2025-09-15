#include<stdio.h>
int main(){
    int n;
    printf("enter a number ");
    int a=0;
    scanf("%d",&n);
    for (int i=2; i<=n-1; i++){
        if (n%i==0){printf("not a prime number ");
        a=1;}
      
     
    }
   if (a==0){printf("prime number ");}
    return 0;

}