#include<iostream>
using namespace std;
//brute force algo for finding largest subarray sum
//here time complexity is of O(n^3)
int largeestSubArray_Sum(int arr[],int n)
{
    int largest_sum=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            int current_sum=0;
            for(int k=i;k<=j;k++)
            {
                current_sum+=arr[k];
            }
            largest_sum=max(largest_sum,current_sum);
            // if(largest_sum==0)
            // {
            //     cout<<"True";
            // }
        }
    }
    return largest_sum;
}

int main()
{
    int arr[]={1,2,3,-4,5};
    int n=sizeof(arr)/sizeof(int);

    cout<<largeestSubArray_Sum(arr,n);

    return 0;
}