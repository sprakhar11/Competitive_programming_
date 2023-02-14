#include <bits/stdc++.h>
#define lli long long int
#define MOD 1000000007
using namespace std;
//prakhar_0007

void solve()
{
    int h , v ;
    cin >> h >> v ;
    int p = 0 ;
    //string ch = "0";
    if ( v > h )
    {
        p = 1 ;
    }
    if (v == h )
    {
        cout << v+ h +2 <<"\n";
        for ( int i = 0 ; i < h + v + 2 ; i++)
    {
        cout << p ;
        if ( p == 0 )
        p = 1 ;
        else
        p = 0 ; 
        
    } 
    return;

    }

    
    cout <<(2 * min(h , v) ) + 3 + (3 * (abs( h-v ) - 1))  << "\n" ;
    for ( int i = 0 ; i < h + v + 3 - abs(v - h) ; i++)
    {
        cout << p ;
        if ( p == 0 )
        p = 1 ;
        else
        p = 0 ;
        
    } 
    
    
    if ( abs(v- h) > 1)
    {
        if ( h > v )
        {
            for(int i = 1 ; i < h - v ; i++ ){
                cout << 0 << 10 ;
            }
        }
        else
        {
            for(int i = 1 ; i < v- h ; i++ ){
                cout << 101 ;
            }
        }
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
