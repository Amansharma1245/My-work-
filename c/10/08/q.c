#include <stdio.h>
void readarray(int a[], int size)
{
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
    }
}

void printarray(int b[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("Array is %d\n",b[i]);
    }
}
void sort(int a[], int size)
{
    int temp;
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = i+1; j < size; j++)
        {
            if (a[i] < a[j])
            {
               temp=a[i];
               a[i]=a[j];
               a[j]=temp;
            }
        }
    }
}

int main()
{
    int size;
    printf("Enter the size of array");
    scanf("%d", &size);
    int a[size];
    readarray(a, size);

    printf("Before sorting :\n ");
    printarray(a, size);

    sort(a, size);
    printf("After sorting :\n ");
    printarray(a,size);
    return 0;
}