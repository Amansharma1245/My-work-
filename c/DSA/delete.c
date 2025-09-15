#include<stdio.h>
int main()
{
    int arr[5]={1,2,3,4,5};
    int loc;
    printf("Enetr the location ");
    scanf("%d",&loc);
    for(int i=loc-1; i<4; i++){
        arr[i]=arr[i+1];
    }
    for(int i=0; i<4; i++){
        printf("%d\t",arr[i]);
    }
}