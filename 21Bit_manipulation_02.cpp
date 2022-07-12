#include <bits/stdc++.h>
using namespace std;

int get_Ith_bit(int n, int i)
{
    int mask = (1 << i);
    return (n & mask) > 0 ? 1 : 0;
}

void set_Ith_bit(int &n,int i)
{
    int mask=(i << i);
    n= (n|mask);
}

int clear_Ith_bit(int &n,int i)
{
    int mask=~(1<<i);
    n=n&mask;
}

int main()
{
    int n=5;
    int i;
    cin>>i;
    cout<<get_Ith_bit(n,i)<<endl;
    return 0;
}