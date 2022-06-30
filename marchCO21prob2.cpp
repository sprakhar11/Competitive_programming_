#include <bits/stdc++.h>
#define int long long int
#define mod 1000000007
using namespace std;
void vectorinput( vector<int> &v , int n )
{
    for (int i = 0; i < n; i++)
        {
            int x ;
            cin >> x;
            v.push_back(x);
            
        }
    
}
void solve()
{
    int n , m , k ;
    cin >> n >> m >> k;
    int ans =0 ;
    //for loop thill m;
    k +=2;
    if ( n == 1 && m == 1 ){
        cout << k << "\n" ;
        return;
    }
    for (int i = 1; i <= m; i++)
    {
        if( i < n )
        {
            if( i % 2 !=0)
            {
                ans ^= k;
                k++;
            }
            else 
            k++;
        }
        else
        {
            if ( n%2 !=0)
            {
                ans ^= k;
                k++;
            }
            else
            {
                k++;
            }
        }
    }
    // column loop
    int y = n-1;
    for (int i = 0; i < n-1; i++)
    {
        if(y < m )
        {if( y % 2 !=0 )
        {
            ans ^= k;
            k++;
        }
        else
        {
            k++;
        }}
        else
        {
            if( m % 2 !=0 )
        {
            ans ^= k;
            k++;
        }
        else
        {
            k++;
        }
        }
        y--;
    }
    cout << ans << endl;
    
}
signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("error.txt", "w", stderr);
    #endif
    int t = 1 ;
    cin >> t ;
    for (int i = 0; i < t; i++)
    {
        solve();
    }
    return 0;
}
