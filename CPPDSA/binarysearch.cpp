#include <iostream>
using namespace std;
int binarysearch(int arr[], int size, int key)
{
    int st = 0;
    int end = size - 1;
    int mid = st + (end - st) / 2;
    int a = 3;
    while (st <= end)
    {
        if (arr[mid] == key) // Here  array will find the key to middle of array
            return mid;

        if (key > arr[mid])
        {
            st = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = (st + end) / 2;
    }
    return -1;
}
int main()
{
    int evenarr[] = {2, 4, 6, 8};
    int oddarr[] = {1, 3, 5, 7, 9};
    cout << "Index of key is=" << binarysearch(evenarr, 4, 4) << endl;

    if (binarysearch(oddarr, 11, 11) != -1)
    
        {
            cout << "Index of key is=" << binarysearch(oddarr, 11, 11) << endl;
                }
        if (binarysearch(oddarr, 11, 11) == -1)
    
    {
        cout << "Key not found error 404";
    }
}