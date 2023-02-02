#include <bits/stdc++.h>
using namespace std;
// For 0 1 2
void sort012(int a[], int n)
    {
        // code here 
        int low=0;
        int mid=0;
        int high=n-1;
        while(mid<=high)
        {
            if(a[mid]==0)
            {
                swap(a[mid],a[low]);
                mid++;
                low++;
            }
            else if(a[mid]==1)
            {
                mid++;
            }
            else
            {
                swap(a[high],a[mid]);
                high--;
            }
        }
    }
// Sort 0 and 1
void segregate0and1(int arr[], int n) 
    {
        // code here
        int i=0;
        int j=n-1;
        while(i<=j)
        {
            if(arr[i]==0)
            {
                i++;
            }
            else if(arr[j]==1)
            {
                j--;
            }
            else if(arr[i]==1 && arr[j]==0)
            {
                swap(arr[i],arr[j]);
                i++;
                j--;
            }
        }
    }
int main(){
    
    return 0;
}