#include<stdio.h>
int main (){
    int arr[]={1,2,3,4,5};
    int key; 
    int loc;
    printf("Enter the key ");
    scanf("%d",&key);
    printf("Enter the location ");
    scanf("%d",&loc);
    for(int i=5; i>=loc; i--)
    {

            arr[i]=arr[i-1];

    }
    arr[loc-1]=key;
    for(int i=0 ; i<=5; i++){
        printf("%d\t",arr[i]);
    }
}