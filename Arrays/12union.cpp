#include <bits/stdc++.h>
using namespace std;
vector<int> findUnion(int arr1[], int arr2[], int n, int m)
    {
        vector<int> ans;
        int i=0;
        int j=0;
        int temp=0;
        while(i<n && j<m)
        {
            if(arr1[i]<arr2[j])
            {
                if(temp!=arr1[i])
                {
                    temp=arr1[i];
                    ans.push_back(arr1[i]);
                    i++;
                }
                else
                {
                    i++;
                }
            }
            else if(arr2[j]<arr1[i])
            {
                if(temp!=arr2[j])
                {
                    temp=arr2[j];
                    ans.push_back(arr2[j]);
                    j++;
                }
                else
                {
                    j++;
                }
            }
            else if(arr1[i]==arr2[j])
            {
                if(temp!=arr2[j])
                {
                    temp=arr2[j];
                    ans.push_back(arr2[j]);
                    i++;
                    j++;
                }
                else
                {
                    i++;
                    j++;
                }
            }
        }
        while(i<n)
        {
            if(temp!=arr1[i])
            {
                temp=arr1[i];
                ans.push_back(arr1[i]);
            }
            i++;
        }
        while(j<m)
        {
            if(temp!=arr2[j])
            {
                temp=arr2[j];
                ans.push_back(arr2[j]);
            }
            j++;
        }
        return ans;
        
        
    }