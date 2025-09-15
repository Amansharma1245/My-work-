#include<stdio.h>
int main ()
{
    int arr[100];
    for(int i=0; i<5; i++){
        scanf("%d",&arr[i]);
    }
    int k;
    printf("Enter the number to search");
    scanf("%d",&k);
    int l=0;
   for(int i=0; i<5; i++){  

    if(arr[i]==k)  l==1;
   
   }
   if(l==1)   printf("Element found  ");

   else printf("Not found");

}