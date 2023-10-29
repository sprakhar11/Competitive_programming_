
#include <bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace chrono;
using namespace __gnu_pbds;

#include <unordered_set>
#include <chrono>
#define MOD 1000000007
#define MOD1 998244353
#define INF 1e18
#define vi vector<int>
#define vvi vector<vector<int>>
#define pii pair<int, int>
#define endl "\n"
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
#define amax(a) *max_element(a, a + n)
#define amin(a) *min_element(a, a + n)
#define vmax(a) *max_element(a.begin(), a.end())
#define vmin(a) *min_element(a.begin(), a.end())


typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;
// typedef tree<pair<int, int>, null_type, less<pair<int, int>>, rb_tree_tag, tree_order_statistics_node_update > pbds; // find_by_order, order_of_key

#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x <<" "; _print(x); cerr << endl;
#else
#define debug(x)
#endif

template <class T> void _vin(vector<T> &v, int n){
    T a;
    for(int i = 0; i < n; i++){
        cin >> a;
        v.pb(a);
    }
}

void _print(ll t) {cerr << t;}
void _print(int t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}
void _print(lld t) {cerr << t;}
void _print(double t) {cerr << t;}
void _print(ull t) {cerr << t;}

template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T> void _print(multiset <T> v);
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.ff); 
cerr << ","; _print(p.ss); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); 
cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); 
cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); 
cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) 
{_print(i); cerr << " ";} cerr << "]";}



ll gcd(ll a, ll b) {if (b > a) {return gcd(b, a);} if (b == 0) {return a;} 
return gcd(b, a % b);}

ll mult(ll x, ll y) {ll res = x * y;return (res >= MOD ? res % MOD : res);}

ll factorial(ll v){ll ans=1;for(int i=2;i<=v;i++){ans*=i;ans%=MOD;} return ans;}

int power(long long x, unsigned int y, int m){int res = 1;x = x % m; if (x == 0) 
return 0;while (y > 0){if (y & 1)res = (res*x) % m;y = y>>1;x = (x*x) % m;}return res;}


vector<ll> sieve(int n) {int*arr = new int[n + 1](); vector<ll> vect; 
for (int i = 2; i <= n; i++)if (arr[i] == 0) {vect.push_back(i); 
for (int j = 2 * i; j <= n; j += i)arr[j] = 1;} return vect;}

ll highestPowerof2(ll n){ ll p = (ll)log2(n);   return (ll)pow(2, p);}

bool isPowerOfTwo(int n){ if(n==0)   return false;   
return (ceil(log2(n)) == floor(log2(n)));}

bool chkprime(int n){ for(int i = 2 ; i*i <= n ; i++){ if( n % i == 0) return false;} 
return true; }

string to_binary(int n) { string s = ""; for (int i = 31; i >= 0; i--) 
{ int k = n >> i; if (k & 1) s = s + "1";else s = s + "0";}return s ; }

static void removeTrailingCharacters(std::string &str, const char charToRemove) 
{str.erase (str.find_last_not_of(charToRemove) + 1, std::string::npos );}

static void removeLeadingCharacters(std::string &str, const char charToRemove) 
{str.erase(0, std::min(str.find_first_not_of(charToRemove), str.size() - 1));}
long long lcm(int a, int b){    return (a / gcd(a, b)) * b;}
int digits_count(int n){int d=0;while(n != 0){d++;n /=10;}return d;}

vector<string> to_token(string s){vector<string> tokens; stringstream chk1(s); 
string tmp; while(getline(chk1, tmp, ' ')){ tokens.push_back(tmp); } return tokens;}

vector<int> findFactors(int n){vector<int> v;for (int i=1; i<=sqrt(n); i++)
{if (n%i == 0){if (n/i == i)v.pb(i);else {v.pb(i);v.pb(n/i);}}}sort(all(v));return v;}


//CHECK THE EDGE CASES 10 TIMES


void solve() { 

    int n;
    cin >> n;
    string s;
    cin >> s;

    map<int, int> mp;

    for (int i = 0; i < n; i++) {
        mp[s[i] - '0']++;
    }

    if(mp[0] != mp[1]){
        cout << -1 << endl;
        return;
    }

    vector<int> ans;

    int l = 0;
    int h = n - 1;

    while(l <= h){
        
        if(s[l] != s[h]){
            l++;
            h--;
            continue;
        }

        if(s[l] == '0'){
            s.insert(h + 1, "01");
            ans.push_back(h + 1);
            h +=2;
        } else {
            s.insert(l, "01");
            ans.push_back(l);
            h +=2;
        }
    }
    cout << ans.size();
    cout << endl;

    for(auto it: ans){
        cout << it << " ";
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
    auto start = chrono::steady_clock::now();

    //  Insert the code that will be timed


    ll t = 1 ;
    cin >> t ;
    int ii;
    for ( ii = 1; ii <= t; ii++) {
        //  cout << "Case #" << i <<": ";
        solve();
    }

    auto end = chrono::steady_clock::now();

    auto diff = end - start;
    cerr << chrono::duration <double, nano> (diff).count() << " ns" << endl;
    
    return 0;
    
}