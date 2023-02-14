#include <bits/stdc++.h>
#define lli long long 
#define int long long 

using namespace std;
//prakhar_0007
const int MOD = 1e9 + 7;
lli mult(lli x, lli y) 
{
    lli res = x * y;
    return (res >= MOD ? res % MOD : res);
}
lli factorial(lli v)
{
    lli ans=1;
    for(int i=2;i<=v;i++)
    {
        ans*=i;
        ans%=MOD;
    }
    return ans;
}
lli power(lli x, lli y)
{   if (y < 0)
    return 1;
    lli res = 1; 
    x %= MOD;
    while (y!=0) 
    {
        if ((y & 1)==1)
        res = mult(res, x); 
        y >>= 1;
        x = mult(x, x);
    } 
    return res;
}
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
    int w , h ;
    cin  >> w >> h;
    int k1 , k2  , k3 ,k4;
    cin  >> k1;
    vector<int> s1 ; 
    vectorinput( s1 , k1 ) ;
    cin >> k2;
    vector<int> s2 ;
    vectorinput( s2 , k2 ) ;
    cin >> k3;
    vector<int> s3 ;
    vectorinput( s3 , k3);
    cin >> k4;
    vector<int> s4 ;
    vectorinput( s4 , k4);
    int a1 = s1[k1-1] - s1[0];
    int a2 = s2[k2 -1] - s2[0];
    int a3 = s3[k3 -1] - s3[0];
    int a4 = s4[k4 -1] - s4[0];
    int p =max(a1 , a2 );
    int q = max(a4, a3 );
    int ans = max (( p * h ), (q * w) );
    cout << ans << "\n";




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
