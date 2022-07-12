#include<iostream>
#include<algorithm>
using namespace std;


//comparator function for comparing the elements and returning in reverse or sorted manner
bool compare(int a,int b)
{
    return a>b;
}


int main()
{
    int arr[]={12,32,6,5,4,3,2,11,15};
    int n=sizeof(arr)/sizeof(int);

    sort(arr,arr+n);

    for(int x: arr)
    {
        cout<<x<<" ";
    }

    reverse(arr,arr+n);

    for(int x: arr)
    {
        cout<<x<<" ";
    }

    return 0;

}