#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1, 2, 3, 1,6, 2,5, 3};
    for (int i = 0; i < 8; i = i + 2)
    {
        int f = 0;
        for (int j = 0; j < 8; j++)
        {
            if(i!=j){   
            if (arr[i] == arr[j])
                f = 1;
            }
        }
        if (f == 0)
            cout << "Element mil gaya re baba" << arr[i]<<" ";
    }
}