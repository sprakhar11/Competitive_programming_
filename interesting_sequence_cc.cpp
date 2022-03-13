#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <bits/stdc++.h>
#include <vector>
#define lli long long int
#define mod 1000000007
using namespace std;
//prakhar_0007
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    lli t;
    lli sum=0;
    cin>>t;
    while (t--)
    {
        sum=0;
        lli k=0;
        cin>>k;
        int l=2*k+1;
        cout<<" i= "<<k<<" =  ";
        for (lli i = 1; i < l; i++)
        {
            lli a = k + (i * i);
            lli b = k + ((i+1) * (i+1));
            
            sum+=__gcd(a,b);
            cout<<a<<" <-> "<<b<<"="<<__gcd(a,b)<<"\n";
        }

        cout<<"\n"<<sum<<"\n";
        

        
    }
    return 0;
}
