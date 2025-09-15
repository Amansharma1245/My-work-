#include<stdio.h>
int main ()
{
    int arr[100];
    for(int i=0; i<5; i++){
        scanf("%d",&arr[i]);
    }
    printf("Old array is");
    for(int i=0; i<5; i++){
        printf("%d",arr[i]);
    }
    for(int i=0; i<5-1; i++){
        for(int j=0; j<5-i-1; j++){
            if(arr[j]<arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    printf("\nNew array is ");
    for(int i=0; i<5; i++){
        printf("%d",arr[i]);
    }

}