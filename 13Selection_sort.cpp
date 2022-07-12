#include<iostream>
using namespace std;

void selection_sort(int arr[],int n)
{
    for(int pos=0;pos<=n-2;pos++)
    {
    int current=arr[pos];
    int min_element=pos;

    for(int j=pos;j<n;j++)
    {
        if(arr[j]<arr[min_element])
        {
            min_element=j;
        }
    }
    swap(arr[min_element],arr[pos]);
    }
}

int main()
{
    int arr[]={2,4,-1,-3,5,7,8};
    int n=sizeof(arr)/sizeof(int);
    selection_sort(arr,n);

    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
    }
    cout<<endl;
    return 0;
}