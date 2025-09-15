#include <stdio.h>
int readarray(int a[], int size)
{
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
    }
}

void printarray(int a[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("Array is %d\n", a[i]);
    }
}
void sort(int a[], int size)
{
    int temp;
    for (int i = 0; i < size ; i++)
    {
        for (int j =0; j < size-i-1; j++)
        {
            if (a[j] < a[j+1])
            {
               temp=a[j];
               a[j]=a[j+1];
               a[j+1]=temp;
            }
        }
    }
}

int main() //change by user input like if type asn and desc then according to the input code run ;
{
    int size;
    printf("Enter the size of array");
    scanf("%d", &size);
    int a[size];
    readarray(a, size);

    printf("Before sorting :\n ");
    printarray(a, size);

    sort(a, size);
    printf("\n After sorting : ");
    printarray(a,size);
    return 0;
}