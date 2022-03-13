#include <bits/stdc++.h>
#define ll long long 
#define int long long 
#define MOD1 998244353
#define INF 1e18
#define endl "\n"
#define vi vector<int>
#define vii vector<pair<int, int>>
#define vs vector<string>
#define vc vector<char>
#define vb vector<bool>
#define pb push_back
#define vvi vector<vector<int>>
#define pii pair<int, int>
#define ff first
#define ss second
#define ss second
#define PI 3.141592653589793238462
#define set_bits __builtin_popcountll
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()
#define f(i,a,b) for(ll i=a;i<b;i++)

using namespace std;
//prakhar_0007
#define watch(x) cout << (#x) << " = " << (x) << endl
const int MOD = 1e9 + 7;
ll gcd(ll a, ll b) {if (b > a) {return gcd(b, a);} if (b == 0) {return a;} return gcd(b, a % b);}
ll mult(ll x, ll y) {ll res = x * y;return (res >= MOD ? res % MOD : res);}
ll factorial(ll v){ll ans=1;for(int i=2;i<=v;i++){ans*=i;ans%=MOD;}return ans;}
ll power(ll x, ll y){   if (y < 0)return 1;ll res = 1; x %= MOD;while (y!=0) {if ((y & 1)==1)res = mult(res, x); y >>= 1;x = mult(x, x);} return res;}
vector<ll> sieve(int n) {int*arr = new int[n + 1](); vector<ll> vect; for (int i = 2; i <= n; i++)if (arr[i] == 0) {vect.push_back(i); for (int j = 2 * i; j <= n; j += i)arr[j] = 1;} return vect;}
void vin( vector<int> &v , int n ){for (int i = 0; i < n; i++){int x ;cin >> x;v.push_back(x);}}
void vout(vector<int> &v){for (int i = 0; i < v.size(); i++){cout << v[i] << " " ;}cout << endl;}
ll highestPowerof2(ll n){ ll p = (ll)log2(n);   return (ll)pow(2, p);}
bool isPowerOfTwo(int n){ if(n==0)   return false;   return (ceil(log2(n)) == floor(log2(n)));}
bool chkprime(int n){ for(int i = 2 ; i*i <= n ; i++){ if( n % i == 0) return false;} return true; }

void prakhar()
{   
    int n ; cin >> n ;
    vi v;
    vin(v , n);
    vi od;

    for (int i = 0; i < n; i++)
    {
        if(v[i]%2!=0)
        {
            od.pb(v[i]);
        }
    }
   
   
        //not prime;
        int sum = 0;
        sum = accumulate(all(v) , sum);
        if((!chkprime(sum)) || sum %2 == 0)
        {
            cout << n << endl;
            for (int i = 0; i < n; i++)
            {
                cout << i+1 << " ";
            }
            cout << endl;
            
            return;
        }
        for(int i = 0 ; i  < sz(od) ; i++)
        {
            
            
            if(!chkprime(sum - od[i]))
            {
                
                cout << n - 1 << endl;
                for (int j = 0; j < n; j++)
                {
                    if( v[j] != od[i])
                    {
                        cout << j+1 << " " ;
                    }
                }
                cout << endl;
                
                return;
            }
            
        }
        
        cout << n -2  << endl;
        
        for (int i = 0; i < n; i++)
        {
            if( v[i]== od[0])
            {
                continue;
            }
            if( v[i]== od[1])
            {
                continue;
            }
            cout << i +1 << " ";

        }
        cout << endl;
        
        


    
    
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
