#include<stdio.h>
int main (){
    int arr[5]={1,2,7,8,5};
    int lar=arr[1];
    for(int i=0; i<5; i++)
    {
        if(arr[i]>lar)  lar=arr[i]; 
    }
    int seclarg=-1111;
   for(int i=0; i<5; i++){
    if(arr[i]!=lar){
            if(arr[i]>seclarg)  seclarg=arr[i]; 
    }
   }
   printf("Second largest is %d",seclarg);
}