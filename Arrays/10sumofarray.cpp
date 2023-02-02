#include <bits/stdc++.h>
using namespace std;
vector<int> findSum(vector<int> &a, vector<int> &b) 
	{
	    vector<int> ans;
	    int i=a.size()-1;
	    int j=b.size()-1;
	    int carry=0;
	    while(i>=0 && j>=0)
	    {
	        int sum=a[i]+b[j]+carry;
	        carry=sum/10;
	        sum=sum%10;
	        ans.push_back(sum);
	        i--;
	        j--;
	    }
	    while(i>=0)
	    {
	        int sum=a[i]+carry;
	        carry=sum/10;
	        sum=sum%10;
	        ans.push_back(sum);
	        i--;
	    }
	    while(j>=0)
	    {
	        int sum=b[j]+carry;
	        carry=sum/10;
	        sum=sum%10;
	        ans.push_back(sum);
	        j--;
	    }
	    while(carry!=0)
	    {
	        int sum=carry;
	        carry=sum/10;
	        sum=sum%10;
	        ans.push_back(sum);
	    }
	   // return ans;
	    int n=0;
	    
	   int  m=ans.size()-1;
	    while(n<m)
	    {
	        
	        swap(ans[n++],ans[m--]);
	    }
	    return ans;
	}