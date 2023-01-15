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
int main()
{
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