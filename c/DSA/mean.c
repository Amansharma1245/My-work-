#include<stdio.h>
int main()
{
    int n;
    printf("Enter the size of array ");
    scanf("%d",&n);

    int arr[n];
    int mean=0;
    printf("Enter element ");
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0; i<n; i++){
            mean=mean+arr[i];
    }
    printf("Mean of number is %d",mean/n);
}