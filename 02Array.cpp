#include<iostream>
using namespace std;

void printArray(int *arr,int n)
{
    cout<<"In function: "<<sizeof(arr)<<endl;

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }
}
//this functions is tp show that the array have different size in the main function and in the function passed
//beccause the arrays are passed by the reffrence in the function

int main()
{
    int arr[]={1,2,3,4,5,6};
    int n=sizeof(arr)/sizeof(int);

    cout<<"In Main: "<<sizeof(arr)<<endl;


    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }

    printArray(arr,n);

    return 0;

}