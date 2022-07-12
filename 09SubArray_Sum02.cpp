#include<iostream>
using namespace std;

//this algoritm is known as KADANE's algorithm
//this solves the problem in linear time
int maximum_subArray_sum(int arr[],int n)
{
    int current_sum=0;
    int largest_sum=0;

    for(int i=0;i<n;i++)
    {
        current_sum=current_sum+arr[i];
        if(current_sum<0)
        {
            current_sum=0;
        }
        largest_sum=max(largest_sum,current_sum);
    }
    return largest_sum;
}

int main()
{
    int arr[]={5,6,-1,4,-2,1,1,3,5,-5};
    int n=sizeof(arr)/sizeof(int);

    cout<<maximum_subArray_sum(arr,n)<<endl;

    return 0;
}