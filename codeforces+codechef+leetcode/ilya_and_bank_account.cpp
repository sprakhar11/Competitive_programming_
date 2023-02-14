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
    lli n;
    cin >> n;   
    if( n >= 0)
    cout << n;
    else
    {
         lli p = n * -1;
         lli l = to_string(p).length();
         lli a=stoi(to_string(p).erase(l-1 , 1));
         lli b=stoi(to_string(p).erase(l-2 , 1));
         
         cout << min(a, b) * -1;
    }
    return 0;
}
