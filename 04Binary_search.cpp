#include <iostream>
using namespace std;

int Binary_search(int arr[], int n, int key)
{
    int s = 0;
    int e = n - 1;

    while (s <= e)
    {
        int mid = (s + e) / 2;

        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] > key)
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {12, 14, 16, 18, 22, 27, 28};
    int n = sizeof(arr) / sizeof(int);

    int key;
    cin >> key;

    int index = Binary_search(arr, n, key);

    if (index != -1)
    {
        cout << key << " the element is found at :" << index << endl;
    }
    else
    {
        cout << key << " the element is not present " << endl;
    }
    return 0;
}