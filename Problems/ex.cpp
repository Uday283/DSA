#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={4,3,5,1,2,6,7};
    /*int maxi=arr[0];
        int size=7;
        int snd=0;
        for(int i=1;i<size;i++)
        {
            if(arr[i]>maxi)
            {
                maxi=arr[i];
            }
        }
    cout<<maxi<<endl;
    for(int i=0;i<size-1;i++)
    {
        for(int j=0;j<size;j++)
        {
            if(arr[i]>=arr[j]&&arr[i]<maxi&&arr[i]>snd)
            {
                snd=arr[i];
                
            }
        }
    }
    cout<<snd;
    */
   int maxi=arr[0];
        int size=7;
        int snd=0;
        for(int i=1;i<size;i++)
        {
            if(arr[i]>maxi)
            {
                maxi=arr[i];
            }
        }
    for(int i=0;i<size;i++)
    {
        if(arr[i]<maxi&&arr[i]>snd)
        {
            snd=arr[i];
        }
    }
    cout<<snd;
    return 0;
}