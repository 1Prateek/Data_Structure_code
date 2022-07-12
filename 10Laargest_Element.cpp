#include<iostream>
using namespace std;

int largest_element(int arr[],int n)
{
    int current=0;
    int largest=0;
    for(int i=0;i<n;i++)
    {
        current=arr[i];
        largest=max(largest,current);
    }
    return largest;
}

int main()
{
    int arr[]={1,2,3,4,5,6,67,8};
    int n=sizeof(arr)/sizeof(int);

    cout<< largest_element(arr,n)<<endl;

    return 0;
}