/*Given a sorted array Arr of size N and a number X, you need to find the number of occurrences of X in Arr.*/
class Solution{
public:	
	/* if x is present in arr[] then returns the count
		of occurrences of x, otherwise returns 0. */
	int count(int arr[], int n, int x) 
	{
	    // code here
	    int cnt=0;
	    for(int i=0;i<n;i++)
	    {
	        if(arr[i]==x)
	        {
	            cnt++;
	        }
	    }
	    return cnt;
	}
};