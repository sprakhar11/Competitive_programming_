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
        lli n,m;
        cin>>n>>m;
        lli count=0;lli cnt=1;
        for (lli i = 10; i < n; i++)
        {
            cnt=0;count=0;
            for (lli j = i+1; j <= n; j++)
            {
                if(((m % i) % j)==((m % j) % i))
                {
                    //cout<<i<<" <-> "<<j<<" =  "<<((m % j) % i)<<"    m="<<m<<endl;
                    count++;
                }
                else
                {
                    //cout<<i<<" <-> "<<j<<" =  "<<((m % i) % j)<<" != "<<((m % j) % i)<<"   m="<<m<<endl;
                    cnt++;
                }
            }
            cout<<i<<"              cnt="<<cnt<<"  count="<<count<<endl;
            if(cnt==0)
            break;
            
        }
        cout<<count<<"\n";
        
    }
    return 0;
}
