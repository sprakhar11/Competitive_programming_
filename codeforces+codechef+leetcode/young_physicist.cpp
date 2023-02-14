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
    lli sx=0,sy=0,sz=0;
    while (t--)
    {
        int x,y,z;
        cin>>x>>y>>z;
        sx+=x;
        sy+=y;
        sz+=z;
    }
    if(sx==0 && sy==0 && sz==0)
    cout<<"YES\n";
    else
    cout<<"NO\n";
    return 0;
    
}
