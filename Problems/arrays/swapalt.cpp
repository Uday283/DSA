#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr1[5]={1,2,3,4,5};
    int arr[6]={1,2,3,4,5,6};
    for(int i=0;i<6-1;i=i+2)
    {
        swap(arr[i],arr[i+1]);
    }
    for(int i=0;i<6;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}