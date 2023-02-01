#include <bits/stdc++.h>
using namespace std;
// Using auxillary space;
void rotate(int arr[],int size,int k)
{
    int v[size];
	for(int i=0;i<size;i++)
    {
        v[i]=arr[(i+k)%size];//this is anticlockwise rotation if we want clock wise rotation just store mod part in v
    }
    for(int j=0;j<size;j++)
    {
        cout<<v[j]<<" ";
    }
    cout<<endl;
}
// Without extra space
void reverse(int arr[],int m,int n)
{
    int i=m;
    int j=n-1;
    while(i<=j)
    {
        swap(arr[i++],arr[j--]);
    }
}
void rotate(int arr[],int size,int k)
{
  reverse(arr,0,size);
  reverse(arr,0,size-k);
  reverse(arr,size-k,size);
  for(int i=0;i<size;i++)
  {
      cout<<arr[i]<<" ";
  }
  cout<<endl;
}
// Number of rotations
int findKRotation(int arr[], int n) 
	{
	    int count=0;
	    for(int i=0;i<n-1;i++)
	    {
	        if(arr[n-1]<arr[i])
	        {
	            count++;
	        }
	    }
	    
	    return count;
	}