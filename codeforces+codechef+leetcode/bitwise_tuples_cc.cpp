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
long power_nm(lli n , lli m)
{
    lli p=1;
    while(m>0)
    {
        if(m%2)p=(p*n)%mod;
        n=(n*n)%mod;
        m>>=1;
    }
    return p;
}
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
        lli n ,m;
        cin >> n >> m;
        lli k = power_nm(2 , n );
        cout << power_nm( k -1 , m) << endl;   
    }
    return 0;
}
