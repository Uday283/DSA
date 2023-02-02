#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
/*Given an integer array nums of length n where all the integers of nums are in the range [1, n] and each integer appears once or twice, return an array of all the integers that appears twice.*/
// 1->approch
    vector<int> findDuplicates(vector<int>& nums) 
    {
        unordered_map<int,int> m;
        vector<int> ans;
        for(int i=0;i<nums.size();i++)
        {
            m[nums[i]]++;
        }
        for(auto i:m)
        {
            if(i.second==2)
            {
                ans.push_back(i.first);
            }
        }
        return ans;
    }
// 2-approch
vector<int> findDuplicates2(vector<int>& nums) 
    {
        vector<int> ans;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[abs(nums[i])-1]<0)
            {
                ans.push_back(abs(nums[i]));
            }
            nums[abs(nums[i])-1]=-nums[abs(nums[i])-1];
        }
        return ans;
    }
/*Given an array a[] of size N which contains elements from 0 to N-1, you need to find all the elements occurring more than once in the given array.*/
// 1->Approach
vector<int> duplicates(int arr[], int n) 
    {
        sort(arr,arr+n);
        
         vector<int>ans;
        int x=-1;
        for(int i = 0; i<n-1 ; i++)
        {
            
             if((arr[i]==arr[i+1]) && (arr[i]-x)!=0 )
             {
                ans.push_back(arr[i]);
                x=arr[i];
             }

        }
        if(ans.empty())
        {
            ans.push_back(-1);
            return ans;
        }
    return ans;
    }
// 2->Approach
vector<int> duplicates(int nums[], int n) 
    {
        // code here
        unordered_map<int,int> m;
        vector<int> ans;
        for(int i=0;i<n;i++)
        {
            m[nums[i]]++;
        }
        for(auto i:m)
        {
            if(i.second>=2)
            {
                ans.push_back(i.first);
            }
        }
        sort(ans.begin(),ans.end());
        if(ans.empty())
        {
            ans.push_back(-1);
            return ans;
        }
    return ans;
    }
};
int main(){
    
    return 0;
}
