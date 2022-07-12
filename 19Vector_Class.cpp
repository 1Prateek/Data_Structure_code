#include<bits/stdc++.h>
using namespace std;

class Vector
{
    int *arr;
    int current_size;
    int maximum_size;

    public:
        Vector()
        {
            current_size=0;
            maximum_size=1;
            arr=new int[maximum_size];
        }
}