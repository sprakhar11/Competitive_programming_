#include <bits/stdc++.h>
#define lli long long int
#define MOD 1000000007
using namespace std;
//prakhar_0007

void solve()
{
    int n ; 
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << i + 2 << " " ;
    }
    cout << "\n";
    
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
