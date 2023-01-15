#include <bits/stdc++.h>
using namespace std;
vector <int> NGEv(vector<int> v)
{
    stack<int> st;
    vector<int> ans(v.size(),-1);
    /*for(int i=0;i<v.size();i++)
    {
    if(st.empty())
    {
        st.push(i);
    }
    else if(v[st.top()]>v[i])
    {
        st.push(i);
    }
    else if(v[st.top()]<v[i])
    {
        while(!st.empty())
        {
            int topindex=st.top();
            if(v[topindex]<v[i])
            {
                ans[topindex]=v[i];
                st.pop();
                if(i==v.size()-1)
                {
                    break;
                }
            }
        }
        st.push(i);
    }
    }
    return ans;
    */
   for(int i=0;i<v.size();i++)
    {
        while(!st.empty()&&v[i]>v[st.top()])
        {
            ans[st.top()]=v[i];
            st.pop();
        }
        st.push(i);
    }
    return ans;
}
int main()
{
    vector<int> v={1,3,2,4};
    vector<int>NGE=NGEv(v);
    for(auto i:NGE)
    {
        cout<<i<<" ";
    }
    return 0;
}