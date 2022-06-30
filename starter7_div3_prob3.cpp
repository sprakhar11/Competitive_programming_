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
    int n , k ;
    cin >> n >> k;
    lli p = pow(2,n) ;
    int d=  p / 2;
    if(k ==0)
    {
        cout << "0\n";
        return;
    }
    if(k>=d)
    {
        lli ans = (p-1) * p;
        cout << ans << endl;

    }
    else
    {
        lli ans = (p-1) * k * 2;
        cout << ans << endl;
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
