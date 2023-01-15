#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector <int> v={1,2,3,4,5};
    vector <int> ::iterator it;
    for(it=v.begin();it!=v.end();it++)
    {
        cout<<*it;
    }
    cout<<endl;
    
    vector<pair<int,int>> v_p={{1,2},{3,4},{5,6}};
    vector<pair<int,int>> ::iterator it1;
    for(it1=v_p.begin();it1!=v_p.end();it1++)
    {
        cout<<(*it1).first<<" "<<(*it1).second<<endl;
    }
    for(it1=v_p.begin();it1!=v_p.end();it1++)
    {
        cout<<it1->first<<" "<<it1->second<<endl;
    }

    // Range based loops
    for(pair<int,int> value : v_p)
    {
        cout<<value.first<<" "<<value.second<<endl;
    }
    for(auto value:v_p)
    {
        cout<<value.first<<" "<<value.second<<endl;
    }
    return 0;
}