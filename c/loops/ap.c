#include<stdio.h>
int main(){
   int n;
   printf("Enter a number");
   scanf("%d",&n);
   int fac=1;
   while(n!=0){
     fac=fac*n;
     n=n-1;
   }
   printf("Factorail is %d",fac);
}