#include<iostream>
using namespace std;

void insertion_sort(int arr[],int n)
{
    for(int i=1;i<=n-1;i++)
    {
        int current=arr[i];
        int prev=i-1;
        while(prev>=0 and arr[prev]>current);
        {
            arr[prev+1]=arr[prev];
            prev=prev-1;
        }
        arr[prev+1]=current;
    }
}

int main()
{
    int arr[]={2,4,-1,-3,5,7,8};
    int n=sizeof(arr)/sizeof(int);
    insertion_sort(arr,n);

    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
    }
    cout<<endl;
    return 0;
}