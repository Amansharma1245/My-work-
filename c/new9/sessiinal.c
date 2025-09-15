#include <stdio.h>
int main()
{
    int arr[100];
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("Old array is ");
    for (int i = 0; i < n; i++)
    {
        printf(" %d", arr[i]);
    }
    printf("New array is ");
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++ )
        {
            if (arr[i] == arr[j])
            {
                for (int m = j; m < n; m++)
                {
                    arr[m] = arr[m + 1];
                }
                n--;
            }
           
        }
    }

    for (int i = 0; i < n ; i++)
    {
        printf(" %d", arr[i]);
    }
}