#include<bits/stdc++.h>
using namespace std;


void couting_sort(int A[],int B[],int k)
{
    int C[k];
    for(int i=0;i<=k;k++)
    {
        C[i]=0;
    }

    for(int j=0;j<(sizeof(A)/sizeof(A[0]));j++)
    {
        C[A[j]]=C[A[j]]+1;
    }

    for(int i=0;i<=k;i++)
    {
        C[i]=C[i]+C[i-1];
    }

    for(int j=(sizeof(A)/sizeof(A[0]));j>=1;j++)
    {
        B[C[A[j]]]=A[j];
        C[A[j]]=C[A[j]]-1;
    }
}

int main()
{
    int A[]={6,5,4,4,3,2,2,1};
    int B[8];
    coun
}