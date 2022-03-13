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
    int n ;
    cin >> n;
    vector<int> v ;
    vectorinput( v, n ) ;
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n  ; j++)
        {
            int p = i + j + 2;
            if (v[i] * v[j] == p)
            {
                cnt++;
            }
            //cout << v[i] << " " << v[j] << " " << p << endl;
        }
        
    }
    cout << cnt << endl;
    
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    lli t = 1 ;
    cin >> t ;
    for (int i = 0; i < t; i++)
    {
        solve();
    }
    
    return 0;
    
}
