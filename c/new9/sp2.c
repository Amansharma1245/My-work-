#include <stdio.h>

int main()
{
    int arr[100];
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("old array is\n ");
    for (int i = 0; i < n; i++)
    {
       
        printf(" %d",arr[i]);
    }
    for (int i = 0; i < n / 2; i++)
    {
        int temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }
    printf("new array is");
    for (int i = 0; i < n; i++)
    {
        
        printf(" %d", arr[i]);
    }
}