#include <bits/stdc++.h>
#define lli long long int
#define MOD 1000000007
using namespace std;

void solve()
{
    int n ;
    cin >> n;
    int cnt =0 ;
    for (int i = 0; i < n; i++)
    {
        int a ,b , c ;
        cin >> a >> b >> c ;
        if( a+b+c >=2)
        cnt++;
        
    }
    cout << cnt ;
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
    //cin >> t ;
    for (int i = 0; i < t; i++)
    {
        solve();
    }
    
    return 0;
    
}
