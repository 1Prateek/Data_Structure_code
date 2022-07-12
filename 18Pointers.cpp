#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x=43;
    int y=34;

    cout<<&x<<endl;
    cout<<&y<<endl;

    int *xptr=&x;
    int *yptr=&y;

    cout<<xptr<<endl;
    cout<<yptr<<endl;

    return 0;

}