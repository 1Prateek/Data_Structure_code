#include<iostream>
using namespace std;

void bubble_sort(int arr[],int n)
{
    for(int i=1;i<=n;i++){
        for(int j=0;j<=n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}

int main()
{
    int arr[]={-12,-2,-1,0,3,4,2,65,5,45};
    int n=sizeof(arr)/sizeof(int);
    bubble_sort(arr,n);

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<",";
    }
    cout<<endl;

    return 0;
}