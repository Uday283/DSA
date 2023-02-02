#include <bits/stdc++.h>
using namespace std;
/*Given two integer arrays nums1 and nums2, return an array of their intersection. Each element in the result must be unique and you may return the result in any order.*/
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) 
    {
        vector<int> ans;
        for(int i=0;i<nums1.size();i++)
        {
            for(int j=0;j<nums2.size();j++)
            {
                if(nums1[i]==nums2[j])
                {
                    ans.push_back(nums1[i]);
                }
            }
        }
        unordered_map<int,int> ma;
        for(int i=0;i<ans.size();i++)
        {
            ma[ans[i]]++;
        }
        vector<int>ans1;
        for(auto i:ma)
        {
            ans1.push_back(i.first);
        }
        return ans1;
    }
};
// IF the arrays are given in sorted order
vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
{
    vector <int> ans;
    int i=0;
    int j=0;
	while(i<n &&j<m)
    {
        if(arr1[i]==arr2[j])
        {
            ans.push_back(arr1[i]);
            i++;
            j++;
        }
        else if(arr1[i]>arr2[j])
        {
            j++;
        }
        else
        {
            i++;
        }
    }
    return ans;
}
int main(){
    
    return 0;
}