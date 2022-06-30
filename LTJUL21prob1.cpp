#include <bits/stdc++.h>
#define lli long long int
#define mod 1000000007
using namespace std;
void vectorinput( vector<lli> &v , lli n )
{
    for (lli i = 0; i < n; i++)
        {
            lli x ;
            cin >> x;
            v.push_back(x);
            
        }
    
}
void solve()
{
    lli n ;
    cin >> n;
    vector<lli> v ;
    vectorinput(v ,n);
    sort ( v.begin(), v.end());

    lli cnt = 0;
    for (lli i = 0; i < n; i++)
    {
        auto itr1 = upper_bound(v.begin(), v.end(), v[i]);
        int indx1 = itr1 - v.begin();
        cnt += n - indx1;
    }
    cnt +=cnt;
    cout << cnt << endl;
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
