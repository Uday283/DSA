// Given N strings and Q queries checking queries are present or not
#include <bits/stdc++.h>
using namespace std;
int main()
{
    set<string> s;
    int N;
    cin>>N;
    for(int i=0;i<N;i++)
    {
        string s1;
        cin>>s1;
        s.insert(s1);
    }
    int q;
    cin>>q;
    while(q--)
    {
        string str;
        cin>>str;
        auto it=s.find(str);
        if(it!=s.end())
        {
            cout<<"present"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    
    return 0;
}