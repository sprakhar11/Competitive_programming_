#include <bits/stdc++.h>
#define lli long long int
#define MOD 1000000007
using namespace std;

void solve()
{
    int x , y , k ;
    cin >> x >> y >> k;
    if ( x % k == 0 && y % k == 0 )
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("error.txt", "w", stderr);
    #endif
    lli t = 1 ;
    cin >> t ;
    for (int i = 0; i < t; i++)
    {
        solve();
    }
    
    return 0;
    
}
