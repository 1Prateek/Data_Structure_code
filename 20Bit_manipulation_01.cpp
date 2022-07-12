#include<bits/stdc++.h>
using namespace std;

//checking even/odd using bitwise AND
int main()
{
    int x;
    cin>>x;

    if(x&1)
    {
        cout<<"ODD";
    }
    else
    {
        cout<<"EVEN";
    }
    return 0;
}