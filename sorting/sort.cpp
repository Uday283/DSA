#include <bits/stdc++.h>
using namespace std;
// INSERTION SORT
void insert(int arr[], int n)
    {
        int i=1;
        while(i<n)
        {
            int temp=arr[i];
            int j=i-1;
            while(j>=0)
            {
                if(arr[j]>temp)
                {
                    arr[j+1]=arr[j];
                    j--;
                }
                else
                {
                    break;
                }
            }
            arr[j+1]=temp;
            i++;
        }
    }
// BUBBLE SORT
void bubbleSort(int arr[], int n)
    {
        // Your code here  
        for(int i=0;i<n-1;i++)
        {
            for(int j=0;j<n-1;j++)
            {
                if(arr[j]>arr[j+1])
                {
                    swap(arr[j],arr[j+1]);
                }
            }
        }
    }
// SELECTION SORT
int select(int arr[], int i,int n)
    {
        int minelementindex=i;
        for(int k=i+1;k<n;k++)
        {
            if(arr[k]<arr[minelementindex])
            {
                minelementindex=k;
            }
        }
        return minelementindex;
    }
    void selectionSort(int arr[], int n)
    {
       for(int j=0;j<n-1;j++)
       {
            int selectvalue=select(arr,j,n);
            swap(arr[j],arr[selectvalue]);
       }
    }