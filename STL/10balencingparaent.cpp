#include <bits/stdc++.h>
using namespace std;
string isBalenced(string str)
{
    stack<char> s;
    for(int i=0;i<str.length();i++)
    {
       if(str[i]=='('||str[i]=='{'||str[i]=='[')
       {
        s.push(str[i]);
       }
       else
       {
            char ch=s.top();
            if((str[i]==']'&& ch=='[')||(str[i]=='}'&& ch=='{')||(str[i]==')'&& ch=='('))
            {
                s.pop();
            }
       }
    }
    if(s.empty())
    {
        return "yes";

    }
    else{
        return "NO";
    }
}
//using unordered maps
unordered_map<char,int> m={{'[',-1},{'(',-2},{'{',-3},{')',2},{']',1},{'}',3}};
string isBalenced(string s)
{
    stack<char> st;
    for(char bracket : s)
    {
        if(m[bracket]<0)
        {
            st.push(bracket);
        }
        else
        {
            char ch=st.top();
            st.pop();
            if((m[ch]+m[bracket])!=0)
            {
                return "NO";
            }
        }
    }
    if(st.empty())
    {
        return "Yes";
    }
    return "No";

}
int main()
{
    inserting a vector into a stack
    /*stack<vector<int>> s;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        vector<int> temp;
        int N;
        cin>>N;
        for(int j=0;j<N;j++)
        {
            int x;
            cin>>x;
            temp.push_back(x);
        }
        s.push(temp);
    }
    while(!s.empty())
    {
        auto top=s.top();
        for(auto value : top)
        {
            cout<<value;
        }
        s.pop();
    }*/
    cout<<isBalenced("{]");

    return 0;
}
