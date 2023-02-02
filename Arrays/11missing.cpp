
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int missingNumber(vector<int>& nums) 
    {
        int size=nums.size();
        int sum=(size*(size+1))/2;
        int sum2=0;
        for(int i=0;i<size;i++)
        {
            sum2=sum2+nums[i];
        }
        int ans=sum-sum2;
        return ans;
    }
};
// XOR approach
class Solution {
public:
    int missingNumber(vector<int>& nums) 
    {
        int size=nums.size();
        int ans=0;
        for(int i=0;i<size;i++)
        {
            ans=ans^nums[i];
        }
        for(int i=0;i<=size;i++)
        {
            ans=ans^i;
        }
        return ans;
    }
};