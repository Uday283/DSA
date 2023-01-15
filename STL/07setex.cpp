// Given N strings printing unique strings in sorted order
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
    for(auto i:s)
    {
        cout<<i;
    }
    return 0;
}