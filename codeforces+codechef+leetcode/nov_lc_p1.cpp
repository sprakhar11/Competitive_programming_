#include <bits/stdc++.h>
#define lli long long int
#define MOD 1000000007
using namespace std;
//prakahr_0007
void solve()
{
    lli x , y ;
    cin >> x >> y ;
    lli ep =( x + 2 * y) / 2 ;
    if(x%2 == 0){
        if(x==0)
        {
            if(y %2 == 0){
                cout << "YES\n";
            }
            else
            {
                cout << "NO\n";
            }
        }
        else if ( y == 0 )
        {
            if(x%2 == 0){
                cout << "YES\n";
            }
            else
            {
                cout << "NO\n";
            }
        }
        else
        {
            if (ep % 2 == 0){
                if ( ep > x)
                {
                    ep = ep - x;
                    
                }
            }
        }
    }
    else{
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
