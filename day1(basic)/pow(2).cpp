#include <bits/stdc++.h>
using namespace std;
bool isPowerOfTwo(int n)
{
    if(n==1)
    {
        return true;
    }
    long long int ans=1;
    for(int i=0;i<=30;i++)
    {
        ans=ans*2;
        if(ans>n)
        {
            break;
        }
        if(ans==n)
        {
            return true;
        }
    }
    return false;
}
bool isPowerOfTwobit(int n)
{
   if(n<=0)
   {
       return false;
   }
   else if(n==1)
   {
       return true;
   }
   else if((n&(n-1))==0)
   {
       return true;
   }
   return false;
}
int main()
{
    
    return 0;
}