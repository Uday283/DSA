#include <bits/stdc++.h>
using namespace std;
int gcd(int a,int b)
{
    if(b==0)
    {
        return a;
    }
    gcd(b,a%b);
}
int main()
{
    int A;
    int B;
    // Finding LCM
    // Using maixmum
    long long int maxi=max(A,B);
        while(true)
        {
            if(maxi%A==0 && maxi%B==0)
            {
                int b=maxi;
                break;
            }
            else
            {
                maxi++;
            } 
        }  
    // Using HCF LCM=(num1+num2)/hcf;
    // finding hcf using minimum
    for(int i=1;i<=min(A,B);i++)
    {
        if(A%i==0 && B%i==0)
        {
            int ans=i;
        }
    }
    // Using Subtraction of numbers
    while(A!=B)
    {
        if(A>B)
        {
            A=A-B;
        }
        else
        {
            B=B-A;
        }
    } //printing a or b

    // Recursive approch
    gcd(A,B);
    return 0;
}