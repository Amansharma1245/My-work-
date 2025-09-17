#include<stdio.h>
#include<stdlib.h>
int main ()
{
    int i ,n,*ptr;
    ptr=(int *)malloc(sizeof(int));
    printf("Enter the value you want to insert");
    scanf("%d",&n);
    for(i=0; i<n; i++){
        scanf("%d",(ptr+i));

    }
    for(i=0; i<n; i++){
        printf("  %d  ",*(ptr+i));
    }
    free(ptr);
}