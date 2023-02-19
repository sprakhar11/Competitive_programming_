

// dheere dheere re mana, dheere sab kuch hoye
// mali seenche so ghara, ritu aaye phal hoye 

#include <bits/stdc++.h>
#include <unordered_set>
#include <chrono>
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
vector<string> to_token(string s){vector<string> tokens; stringstream chk1(s); string tmp; while(getline(chk1, tmp, ' ')){ tokens.push_back(tmp); } return tokens;}
vector<int> findFactors(int n){vector<int> v;for (int i=1; i<=sqrt(n); i++){if (n%i == 0){if (n/i == i)v.pb(i);else {v.pb(i);v.pb(n/i);}}}sort(all(v));return v;}

vector<int> char_freq(string v, char ch){
    int k = 0;
    int n = v.size();
    int tmp = 0;
    vector<int> ans;
    for(int i = 0; i< n; i++){
        if(v[i] == ch){
            tmp++;
        } else {
            if(tmp != 0)
                ans.push_back(tmp);
             tmp = 0;
        }
    }
    if(tmp != 0)
        ans.push_back(tmp);
    
    return ans;
}

void prakhar() { 

    int m , s ;
    cin >> m >> s ;

    vi ans(m, 0);

    int left = m-1;
    int tmp = s;
    int i = 0;

    int mx = 9 * m;
    if( s == 0 && m == 1){
        cout << 0 << " " << 0 << endl;
        return;
    }

    if(s <= 0 || s > mx) {
        cout << "-1 -1" << endl;
        return;
    }

    // finding max
    while(true){

        while(ans[i] < 9 && tmp > 0){
            tmp--;
            ans[i]++;
        }
        left--;
        i++;
        if(left == -1)
            break;

    }

    vi ans_l(m, 0);

    left = m -1;
    i = 0;
    tmp = s;

    while(true){

        while(ans_l[i] < 9 && ((i < m - 1) ? ((tmp > 1) ? true : false) : true) && tmp > 0){

            ans_l[i]++;
            tmp--;

        }

        left--;
        i++;

        if(left == -1)
            break;

    }

    reverse(all(ans_l));


    for (int i = 0; i < m; i++)
    {
        cout << ans_l[i];
    }

    cout << " ";

    for (int i = 0; i < m; i++)
    {
        cout << ans[i];
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
    // cin >> t ;
    int ii;
    for ( ii = 1; ii <= t; ii++) {
        //  cout << "Case #" << i <<": ";
        prakhar();
    }

    auto end = chrono::steady_clock::now();

    auto diff = end - start;
    cerr << chrono::duration <double, nano> (diff).count() << " ns" << endl;
    
    return 0;
    
}