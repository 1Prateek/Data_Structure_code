#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> arr={1,2,3,4,5};

    //fill constructor
    vector<int> arr1(10,1);//creates an array with 10 elements with initilized 1

    //push_back inserts the element at the last of the array in O(1) time
    arr.push_back(6);

    //printing the elements of the array
    for(int i=0;i<arr.size();i++)
    {
        cout<<arr[i]<<endl;
    }

    //print the size of the vector array
    cout<<arr.size()<<endl;

    //print the capacity of the array
    cout<<arr.capacity()<<endl;

}