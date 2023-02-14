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
    lli n , k, p;
    cin >> n >> k;
    if( n % 2 == 0)
    p = n / 2;
    else
    p = (n / 2) + 1;

    if( k <= p)
    cout << (2 * k) - 1;
    else
    cout << (k - p) * 2;
    
    return 0;
}
