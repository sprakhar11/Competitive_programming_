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
    int r,w,c,rr,ww,cc;
    cin >> r >> w >> c >> rr >>ww >> cc ;
    if( (r > rr && w >ww && c > cc) || (r > rr && w > ww) || (w > ww && c > cc)  || (c > cc && r > rr))
    {
        cout << "A\n";
    }
    else
    cout << "B\n";
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
