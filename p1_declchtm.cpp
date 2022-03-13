#include <bits/stdc++.h>
#define lli long long 
#define int long long 

using namespace std;
//prakhar_0007
const int MOD = 1e9 + 7;

void vectorinput( vector<int> &v , int n )
{
    for (int i = 0; i < n; i++)
        {
            int x ;
            cin >> x;
            v.push_back(x);
            
        }
    
}
void printvec(vector<int> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " " ;
    }
    cout << endl;
}
void solve()
{
    int n ;
    cin >> n;
    vector<int> v ;
    vectorinput( v , n );
    sort(v.begin(), v.end() , greater<int>() );
    // printvec(v);
    if ( v[1] == v[n-1])
    {
        int tmp = v[1];
        v[1] = v[0];
        v[0] = tmp ;
    }
    int ans2 = v[1] * ( v[0] - v[n-1]);
    int ans = v[0] * ( v[1] - v[n-1]);
    cout << max( ans, ans2 ) << "\n";
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
    cin >> t ;
    for (int i = 0; i < t; i++)
    {
        solve();
    }
    
    return 0;
    
}
