#include <bits/stdc++.h>
#define ll long long int
#define MOD 1000000007
using namespace std;
//prakhar_infinity
ll mult(ll x, ll y) 
{
    ll res = x * y;
    return (res >= MOD ? res % MOD : res);
}
ll factorial(ll v)
{
    ll ans=1;
    for(ll i=2;i<=v;i++)
    {
        ans*=i;
        ans%=MOD;
    }
    return ans;
}
ll power(ll x, ll y)
{   if (y < 0)
    return 1;
    ll res = 1; 
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
void vectorinput( vector<ll> &v , ll n )
{
    for (ll i = 0; i < n; i++)
        {
            ll x ;
            cin >> x;
            v.push_back(x);
            
        }
    
}
void prllvec(vector<ll> &v)
{
    for (ll i = 0; i < v.size(); i++)
    {
        cout << v[i] << " " ;
    }
    cout << endl;
}
ll binaryy( ll s , ll n)
{
    ll l = 1 ;
    ll r = n ;
    ll sum = n * (n +1) / 2;
    while(l <= r)
    {
        ll m = l + ( r- l ) / 2;
        ll g = sum - ((l   + r ) / 2 ); 
        //cout << g << endl;
        if ( g == s)
        {
            return m  ;
        }
        if( g > s)
        {
            l = m +1;
        }
        else
        {
            r = m -1;
        }
    }
    return -1 ;
}
void solve()
{
    ll n ,  s;
    cin >> n >> s;
    vector<ll> res;
    
    
    ll ans = binaryy(  s , n);
    cout << ans << endl;
    
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("error.txt", "w", stderr);
    #endif
    ll t = 1 ;
    cin >> t ;
    for (ll i = 0; i < t; i++)
    {
        solve();
    }
    
    return 0;
    
}
