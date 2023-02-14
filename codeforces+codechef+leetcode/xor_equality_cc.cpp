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
    lli t=1;
    cin>>t;
    while (t--)
    {
        lli n,i;
        cin>>n;
        lli cnt=0;
        lli ans=0;
        for ( i = 0; i < 1<<n; i++)
        {
            if((i ^ (i + 1)) ==( (i + 2) ^ (i + 3)))
            {
                //cout<<i<<"\n";
                cnt++;
               
            }
            //cout<<i<<"hi\n";

        }
       // ans=(1<<n)/2;
        ans =cnt % mod;
        cout<<"n="<<n<<"  ="<<(1<<n)<<"\n";
        
    }
    return 0;
}
