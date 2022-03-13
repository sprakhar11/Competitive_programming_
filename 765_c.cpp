#include <bits/stdc++.h>
#define ll long long 
#define int long long 
#define MOD1 998244353
#define INF 1e18
#define endl "\n"
#define lb lower_bound
#define ub upper_bound
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define ff first
#define ss second
#define PI 3.141592653589793238462
#define set_bits __builtin_popcountll
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()
#define f(i,a,b) for(ll i=a;i<b;i++)

using namespace std;
//prakhar_0007
const int MOD = 1e9 + 7;
ll gcd(ll a, ll b) {if (b > a) {return gcd(b, a);} if (b == 0) {return a;} return gcd(b, a % b);}
ll mult(ll x, ll y) {ll res = x * y;return (res >= MOD ? res % MOD : res);}
ll factorial(ll v){ll ans=1;for(int i=2;i<=v;i++){ans*=i;ans%=MOD;}return ans;}
ll power(ll x, ll y){   if (y < 0)return 1;ll res = 1; x %= MOD;while (y!=0) {if ((y & 1)==1)res = mult(res, x); y >>= 1;x = mult(x, x);} return res;}
vector<ll> sieve(int n) {int*arr = new int[n + 1](); vector<ll> vect; for (int i = 2; i <= n; i++)if (arr[i] == 0) {vect.push_back(i); for (int j = 2 * i; j <= n; j += i)arr[j] = 1;} return vect;}
void vit( vector<int> &v , int n ){for (int i = 0; i < n; i++){int x ;cin >> x;v.push_back(x);}}
void printvec(vector<int> &v){for (int i = 0; i < v.size(); i++){cout << v[i] << " " ;}cout << endl;}
ll highestPowerof2(ll n){ ll p = (ll)log2(n);   return (ll)pow(2, p);}
bool isPowerOfTwo(int n){ if(n==0)   return false;   return (ceil(log2(n)) == floor(log2(n)));}
int opspeed(vector<int> &board , vector<int> &speed , int s , )
void prakhar()
{   
    int n , l ,  k ;
    cin >> n >> l >> k;
    vector<int> spd;
    vector<int> dist;
    
    int dp[n+1][n+1];
    vit( dist, n );

    
    dist.pb(l);
    vit( spd, n );
    spd.pb(0);

    //initialize
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if ( j == 0 )
            {
                dp[i][j] = 0;
            }
            if ( j > 0 || i == 0 )
            {
                dp[i][j] = dp[i][j-1] + dist[j-1] * spd[j-1];
            }
        }
        
    }


    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j < n; j++)
        {
            if(i >= j)
            {
                dp[i][j] = dp[i-1][j];
            }
            else
            {
                int p = (dist[j] - dist[j-1]) * speed[j-1];
                int q = (dist[j] - dist[j -2]) * speed[j -2];
                dp[i][j] = min( dp )
            }
        }
        
    }
    
    
    
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("error.txt", "w", stderr);
    #endif
    ll t = 1 ;
    cin >> t ;
    for (int i = 0; i < t; i++)
    {
        prakhar();
    }
    
    return 0;
    
}
