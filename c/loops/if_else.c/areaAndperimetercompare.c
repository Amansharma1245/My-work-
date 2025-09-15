#include<stdio.h>
#include<stdlib.h>
int main ()
{
    int n;
    printf("Enter number :");
    scanf("%d",&n);
   
    int *p;
    int sum=0;
    p=(int *)malloc(n * sizeof(int));
    
    printf("Enter the value of elements: ");
    for (int i = 0; i < n; i++) { 
        scanf("%d", p + i);
        sum += *(p + i);
    }
     
    printf("Sum is %d\n", sum);
    p = (int *)realloc(p, (n + 2) * sizeof(int));
   
    printf("Enter two extra integers: ");
    for (int i = n; i < n + 2; i++) { 
        scanf("%d", p + i);
        sum += *(p + i);
    }
    printf("New sum is %d\n", sum);

    free(p); 
    return 0;
}