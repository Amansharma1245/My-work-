#include<stdio.h>
int main (){
    int n;
    int m;
    scanf("%d",&n);
    scanf("%d",&m);

    int arr1[n];
    int arr2[m];
    for(int i=0; i<n; i++){
        printf("Enter ele of 1 ");
        scanf("%d",&arr1[i]);
    }
    for(int i=0; i<m; i++){
        printf("Enter ele of 2 ");
        scanf("%d",&arr2[i]);
    }
    int arr3[n+m];
    int i,j,in;
    i=j=in=0;
    while(in<n+m){
        if(arr1[i]<arr2[j]){
            arr3[in]=arr1[i];
            i++;
            in++;
        }
        else if(arr1[i]>arr2[j]){
            arr3[in]=arr2[j];
            j++;
            in++;
        }

        else{
            arr3[in]=arr1[i];
            arr3[in+1]=arr2[j];
            i++;
            j++;
            in++;
        }


    }
     for(int i=0; i<m+n; i++){
        printf("%d ",arr3[i]);
        
    }
    
}