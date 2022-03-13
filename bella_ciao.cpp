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
       lli D, d, p, q;
       cin >> D >> d >> p >> q;
       lli k = D / d;
       lli rem = D % d;
       if( d <= D)
       {
           lli sum=p * d * k + ((q * d * (k - 1) * k) / 2 ) ;
           sum += (p + (q * k)) * rem;
           cout << sum << "\n";
       }
       else 
       {
           cout << p * D << "\n";
       }
    }
    return 0;
}
