#include <bits/stdc++.h>
using namespace std;
int main()
{
    set<string>s;
    s.insert("abc");
    s.insert("def");
    s.insert("ghi");
    auto it=s.find("abcd");
    // s.erase(it);->segmentation fault;
    if(it!=s.end())
    {
        cout<<"Yes";
    }
    for(auto i:s)
    {
        cout<<i;
    }
    return 0;
}