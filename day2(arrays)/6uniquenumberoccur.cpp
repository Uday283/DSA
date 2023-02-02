#include <bits/stdc++.h>
using namespace std;
/*Given an array of integers arr, return true if the number of occurrences of each value in the array is unique or false otherwise.*/
https://leetcode.com/problems/unique-number-of-occurrences
bool unique(vector<int> &v)
{
    /*
    unordered_map<int,int> ma;
    for(int i=0;i<v.size();i++)
    {
        ma[v[i]]++;
    }
    for(auto value : ma)
    {
        int cnt=0;
        for(auto i :ma)
        {
            if(i.second==value.second)
            {
                cnt++;
            }
        }
        if(cnt>1)
        {
            return false;
        }
        else
        {
            return true;
        }
    }*/
    sort(v.begin(),v.end());
    vector <int> ans;
    int cnt=1;
    for(int i=0;i<v.size();i++)
    {
        if(v[i]==v[i+1]&& i<v.size())
        {
            cnt++;
        }
        else
        {
            ans.push_back(cnt);
            cnt=1; 
        }
    }
    sort(ans.begin(),ans.end());
    for(int j=0;j<ans.size()-1;j++)
    {
        if(ans[j]==ans[j+1])
        {
            return false;
        }
    }
    return true;
}
int main()
{
    vector<int> v={-3,0,1,-3,1,1,1,-3,10,0};
    bool a=unique(v);
    cout<<a;

    return 0;
}
