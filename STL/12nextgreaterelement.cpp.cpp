#include <bits/stdc++.h>
using namespace std;
 void nextGreaterElement(vector<int>& nums1, vector<int>& nums2) 
 {
    /*{
        O(N^3)
        vector <int> ans(nums1.size(),-1);
        for(int i=0;i<nums1.size();i++)
        {
            for(int j=0;j<nums2.size();j++)
            {
                if(nums2[j]==nums1[i])
                {
                    for(int k=j+1;k<=nums2.size();k++)
                    {
                        if(nums2[k]>nums2[j])
                        {
                            ans[i]=nums2[k];
                            break;
                        }
                    }
                }
            }
        }
        for(auto i:ans)
        {
            cout<<i;
        }
    }
//    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) 
    {
        O(N)
        vector <int> ans(nums2.size(),-1);
        vector<int> ans2;
        unordered_map<int,int> ma;
        stack<int> st;
        for(int i=0;i<nums2.size();i++)
        {
            while(!st.empty()&&nums2[i]>nums2[st.top()])
            {
                ans[st.top()]=nums2[i];
                st.pop();
            }
            st.push(i);
        }
        for(int j=0;j<nums2.size();j++)
        {
            ma[nums2[j]]=ans[j];
        }
        for(int k=0;k<nums1.size();k++)
        {
            ans2.push_back(ma[nums1[k]]);
        }
       for(auto i: ans2)
       {
        cout<<i;
       }
    }*/

// O(N^2)
vector<int> ans(nums1.size(),-1);
    for(int i=0;i<nums1.size();i++)
    {
        int found=0;
        for(int j=0;j<nums2.size();j++)
        {
            if(nums2[j]==nums1[i])
            {
                found=1;
            }
            if(found==1 && nums1[i]<nums2[j])
            {
                ans[i]=nums2[j];
                break;
            }
        }
    }
    for(auto i: ans)
    {
        cout<<i;
    }
 }
int main()
{
    vector<int> nums1={2,4};
    vector <int> nums2={1,2,3,4};
    nextGreaterElement(nums1,nums2);
    return 0;
}