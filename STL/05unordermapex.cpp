// Given N strings and Q quries print the frequency of the queries
#include <bits/stdc++.h>
using namespace std;
int main()
{
    unordered_map<string ,int> m;
    int N;
    cin>>N;
    for(int i=0;i<N;i++)
    {
        string s;
        cin>>s;
        m[s]++;
    }
    int q;
    cin>>q;
    while(q--)
    {
        string s;
        cin >>s;
        cout<<m[s];
    }
    
    return 0;
}