#include <bits/stdc++.h>
using namespace std;
long long sumOfDivisors(int N)
    {
        long long int ans=0;
        for(int i=1;i<=N;i++)
        {
            int div=N/i;
            ans=ans+div*i;
        }
        return ans;
    }
int main()
{
    // N=4
    // 1->1
    // 2->1,2
    // 3->1,3
    // 4->1,2,4
    // n/i counts the number of i's
    return 0;
}