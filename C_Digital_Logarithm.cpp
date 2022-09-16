#include <bits/stdc++.h>
#define ll long long 
#define int long long 
#define MOD1 998244353
#define INF 1e18
#define endl "\n"
#define vi vector<int>
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
#define watch(x) cout << (#x) << " = " << (x) << endl
const int MOD = 1e9 + 7;
ll gcd(ll a, ll b) {if (b > a) {return gcd(b, a);} if (b == 0) {return a;} return gcd(b, a % b);}
ll mult(ll x, ll y) {ll res = x * y;return (res >= MOD ? res % MOD : res);}
ll factorial(ll v){ll ans=1;for(int i=2;i<=v;i++){ans*=i;ans%=MOD;}return ans;}
ll power(ll x, ll y){   if (y < 0)return 1;ll res = 1; x %= MOD;while (y!=0) {if ((y & 1)==1)res = mult(res, x); y >>= 1;x = mult(x, x);} return res;}
vector<ll> sieve(int n) {int*arr = new int[n + 1](); vector<ll> vect; for (int i = 2; i <= n; i++)if (arr[i] == 0) {vect.push_back(i); for (int j = 2 * i; j <= n; j += i)arr[j] = 1;} return vect;}
void vin( vector<int> &v , int n ){for (int i = 0; i < n; i++){int x ;cin >> x; v.push_back(x);}}
void vout(vector<int> &v){for (int i = 0; i < v.size(); i++){cout << v[i] << " " ;}cout << endl;}
ll highestPowerof2(ll n){ ll p = (ll)log2(n);   return (ll)pow(2, p);}
bool isPowerOfTwo(int n){ if(n==0)   return false;   return (ceil(log2(n)) == floor(log2(n)));}
bool chkprime(int n){ for(int i = 2 ; i*i <= n ; i++){ if( n % i == 0) return false;} return true; }
string to_binary(int n) { string s = ""; for (int i = 31; i >= 0; i--) { int k = n >> i; if (k & 1) s = s + "1";else s = s + "0";}return s ; }
static void removeTrailingCharacters(std::string &str, const char charToRemove) {str.erase (str.find_last_not_of(charToRemove) + 1, std::string::npos );}
static void removeLeadingCharacters(std::string &str, const char charToRemove) {str.erase(0, std::min(str.find_first_not_of(charToRemove), str.size() - 1));}
long long lcm(int a, int b){    return (a / gcd(a, b)) * b;}
int digits_count(int n){int d=0;while(n != 0){d++;n /=10;}return d;}

void prakhar() {   

    int n ;
    cin >> n ; 

    vi a;
    vi b;
    vin(a, n);
    vin(b, n);

    int ans = 0;

    map<int, int> mp1;
    map<int, int> mp2;

    for (int i = 0; i < n; i++)
    {
        mp1[a[i]]++;
        mp2[b[i]]++;
    }
    
    for (auto &it:mp1)
    {
        if(mp2.find(it.ff) != mp2.end())
        {
            mp2[it.ff]--;
            mp1[it.ff]--;
        }
    }

    for(auto &it:mp1)
    {
        cout << it.ff << " h1 ";
    }
    cout << endl;
    for(auto &it:mp2)
    {
        cout << it.ff << " h2 ";
    }
    cout << endl;

    for(auto &it:mp1)
    {
        int tmp = it.ff;

        if(tmp > 9)
        {
            ans++;
            int p = digits_count(tmp);
            if(mp1.find(p) != mp1.end())
            mp1[p] += it.ss;
            else
            mp1[p] = it.ss;
            mp1.erase(tmp);
        }
        
    }

    for(auto it:mp2)
    {
        int tmp = it.ff;
        int sec = it.ss;
        cout << tmp << " " << sec << endl;

        if(tmp > 9)
        {
            ans++;

            int p = digits_count(tmp);
            cout << ans << " ans " << p << endl;

            // if(mp2.find(p) != mp2.end())
            // mp2[p] = mp2[p] + sec;
            // else
            // mp2[p] = it.ss;
            auto it2= mp2.find(tmp);
            
            mp2.erase(it2);
        }
        
    }
    for(auto &it:mp1)
    {
        cout << it.ff << " h1 ";
    }
    cout << endl;
    for(auto &it:mp2)
    {
        cout << it.ff << " h2 ";
    }
    cout << endl;

    // for (auto &it:mp1)
    // {
    //     if(mp2[it.ff] != 0)
    //     {
    //         mp2[it.ff]--;
    //         mp1[it.ff]--;
    //     }
    // }

    // for(auto &it:mp1)
    // {
    //     int tmp = it.ff;

    //     if(tmp > 1)
    //     {
    //         ans++;
    //         int p = digits_count(tmp);
    //         mp1[p] += it.ss;
    //         mp1.erase(tmp);
    //     }
        
    // }

    // for(auto &it:mp2)
    // {
    //     int tmp = it.ff;

    //     if(tmp > 1)
    //     {
    //         ans++;
    //         int p = digits_count(tmp);
    //         mp2[p] += it.ss;
    //         mp2.erase(tmp);
    //     }
        
    // }

    // for (auto &it:mp1)
    // {
    //     if(mp2[it.ff] != 0)
    //     {
    //         mp2[it.ff]--;
    //         mp1[it.ff]--;
    //     }
    // }

    

    // cout << ans <<endl;
    
    
    
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
    for (int i = 0; i < t; i++) {
        prakhar();
    }
    
    return 0;
    
}