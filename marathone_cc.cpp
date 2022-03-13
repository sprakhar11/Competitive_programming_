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
        int D,d,a,b,c;
        cin >> D >> d >> a >> b >> c;
        if (D * d < 10.0 )      
        {
            cout << 0 << endl;
        }
        if (D * d >= 10.0 && D * d < 21.0)      
        {
            cout << a << endl;
        }
        if (D * d >= 21.0 && D * d < 42.0)      
        {
            cout << b << endl;
        }
        if (D * d >= 42.0 )      
        {
            cout << c;
        }
        
    }
    return 0;
}