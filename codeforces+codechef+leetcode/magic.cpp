#include <bits/stdc++.h>
#define lli long long 
#define int long long 

using namespace std;
//prakhar_0007
const int MOD = 1e9 + 7;
void solve()
{
    string s;
    cin >> s;
    cout << s.length() << endl;
    if( (-1) < ((int)s.length() - 1) )
    {
        cout << "hi1 " << s << endl;
    }
    if( 1 < (s.length() - 1) )
    {
        cout << "hi2 " << s << endl;
    }

    
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("error.txt", "w", stderr);
    #endif
    lli t = 1 ;
    // cin >> t ;
    for (int i = 0; i < t; i++)
    {
        solve();
    }
    
    return 0;
    
}
