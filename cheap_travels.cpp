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
    int n, m, a, b;
    cin >> n >>m >>a >>b;
    
    if( m == 1)
    {
        cout << min(a, b) * n;
    }
    else
    {
        double d = b / m;
        if( d < (double)a)
        {
            
            cout << ((int)(n / m) * b) + ((n % m !=0)?(min((n % m) * a, b)):0);
            
            
        }
        else
        {
            cout << n * a;
        }
    }
    return 0;
}