#include<bits/stdc++.h>
using namespace std;

bool isSorted(int arr[],int n)
{
    if(n==1 or n==0)
    {
        return true;
    }
    if(arr[0]<arr[1] && isSorted(arr+1,n-1))
    {
        return true;
    }
    return false;
}

int main()
{
    int arr[]={1,2,3,5,6};
    int n=sizeof(arr)/sizeof(arr[0]);

    cout<<isSorted(arr,n);

    return 0;
}