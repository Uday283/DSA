#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n=1001;
    int digit,i=0;
    int ans=0;
    while(n!=0)
    {
        digit=n%10;
        ans=ans+digit*pow(2,i);
        i++;
        n=n/10;
    }
    cout<<ans;
    return 0;
}