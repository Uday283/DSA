#include <bits/stdc++.h>
using namespace std;
int main(){
    int n=10;
    int bin[32];
    int i=0;
    while(n!=0)
    {
        bin[i]=n%2;
        i++;
        n=n/2;
    }
    for(int j=i-1;j>=0;j--)
    {
        cout<<bin[j];
    }
    return 0;
}