#include<stdio.h>
int main()

{
    int arrr[100]={1,2,3,4,5};
    int n;
    printf("Enter a location");
    scanf("%d",&n);
    int m;
    printf("Enter a number ");
    scanf("%d",&m);
   
    for(int i=5; i>n-1; i--){
        arrr[i]=arrr[i-1];

    }
    arrr[n-1]=m;
    printf("New array is ");
    for(int i=0; i<=5 ; i++){
    printf("%d ",arrr[i]);
    }
}