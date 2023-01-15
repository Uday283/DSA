#include <bits/stdc++.h>
using namespace std;
void PrintVector(vector <int> &v)
{
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i];
    }
}
int main()
{
    /*
    // PAIRS IN A VECTOR
    int n;
    cin>>n;
    vector<pair<int,int>> v;
    // Taking input
    for(int i=0;i<n;i++)
    {
        int x,y;
        cin>>x>>y;
        v.push_back(make_pair(x,y));
    }

    // Printing  output
    for(int i=0;i<n;i++)
    {
        cout<<v[i].first<<" "<<v[i].second<<endl;
    }
    
    // Array of vectors
    int N;
    cout<<"Enter the size of the array : ";
    cin>> N;
    vector<int> v1[N];

    // Taking input
    for(int i=0;i<N;i++)
    {
        int n;
        cout<<"Enter the size of the vector : ";
        cin>>n;
        for(int j=0;j<n;j++)
        {
            int x;
            cin>>x;
            v1[i].push_back(x);
        }
    }
    // for(int i=0;i<N;i++)
    // {
    //     for(int j=0;j<v1[i].size();j++)
    //     {
    //         cout<<v1[i][j];
    //     }
    //     cout<<endl;
    // }
    for(int i=0;i<N;i++)
    {
        PrintVector(v1[i]);
    }*/


    // vector of vector
    vector<vector<int>> v;
    int N;
    cin>>N;
    for(int i=0;i<N;i++)
    {
        int n;
        cin>>n;
        vector<int> temp;
        for(int j=0;j<n;j++)
        {
            int x;
            cin>>x;
            temp.push_back(x);
        }
        v.push_back(temp);
    }

    for(int i=0;i<v.size();i++)
    {
        for(int j=0;j<v[i].size();j++)
        {
            cout<<v[i][j];
        }
    }
    return 0;
}