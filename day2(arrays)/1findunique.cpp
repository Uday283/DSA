#include <bits/stdc++.h>
using namespace std;
/*
Using maps O(n)
For multiples of K
int findUnique(int *arr, int size)
{
    unordered_map<int,int> ma;
    for(int i=0;i<size;i++)
    {
        ma[arr[i]]++;
    }
    for(auto i: ma)
    {
        if(i.second==1)
        {
            return i.first;
        }
    }
}

// O(n^2)
int findUnique(int a[], int n, int k)
{
for(int i=0;i<n;i++)
        {
            bool mofk=false;
            int cnt=0;
            for(int j=0;j<n;j++)
            {
                if(a[i]==a[j])
                {
                    cnt++;
                }
            }
            if(cnt%k!=0)
            {
                return a[i];
            }
        }
}*/
// 2m+1 sized array
int findUnique(int a[], int n)
{
    int ans=0;
    for(int i=0;i<n;i++)
    {
        ans=ans^a[i];
    }
    return ans;
}
int main()
{
    int arr[]={6, 2, 5, 2, 2, 6, 6};
    int a =findUnique(arr,7);
    cout<<a;
    
    return 0;
}