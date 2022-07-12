#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    char a[]={'a','b','c','d','\0'};

    cout<<a<<endl;
    cout<<strlen(a)<<endl;//returns the number of visible characters 
    cout<<sizeof(a)<<endl;// +1 length because of the null character defined in the memeory

    return 0;
}