#include<iostream>
using namespace std;

int main()
{
    int marks[100]={0};

    int n;
    cout<<"Enter the number of students";
    cin>>n;

    //input
    for(int i=0;i<n;i++)
    {
        cin>>marks[i];
        marks[i]=marks[i]*2;
    }

    //output
    for(int i=0;i<n;i++)
    {
        cout<<marks[i]<<" ";
    }
    cout<<endl;

    return 0;

}