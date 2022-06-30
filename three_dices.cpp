#include <bits/stdc++.h>
#define lli long long int
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
    int x, y;
    cin >> x >> y;
    double d = 6 - (x  +  y ) ;
    if ( d == 1){
        cout << 0.166666 << endl;
    }
    else if ( d == 2)
    {
        cout << 0.333333 << endl;
    }
    else if ( d == 3)
    {
        cout << 0.5 << endl;
    }
    else if ( d == 4)
    {
        cout << 0.666666 << endl;
    }
    else if ( d == 5)
    {
        cout << 0.833333 << endl;
    }
    
    else
    cout << 0 << endl;
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
