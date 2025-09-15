#include <iostream>
using namespace std;
// int swap(int *a, int *b)
// {
//     int temp = a;
//     a = b;
//     b = temp;
// }
int main()
{
    int arr[] = {5,3,6,4,8,7,3,5};
    for (int i = 0; i < 7; i++)
    {
            int m=i;
        for (int j = m+1 ; j < 7; j++)
        {
            if(arr[m]>arr[j]) 
            arr[m]=arr[j];              
        }
        swap(arr[i],arr[m]);
    }
    for(int m=0; m<7; m++)
{cout<<arr[m]<<endl;}
}