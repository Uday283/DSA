#include <bits/stdc++.h>
using namespace std;
void print(map<int,int>&m)
{
    for(auto value : m)
    {
        cout<<value.first<<" "<<value.second<<endl;
    }
}
int main()
{
    map<int,int> m;
    m[0]=1;
    m.insert({1,2});
    auto it=m.find(1);
    if(it==m.end())
    {
        cout<<"No";
    }
    else
    {
        cout<<(it)->first<<" "<<(*it).second<<endl;
    }
    print(m);
    return 0;
}