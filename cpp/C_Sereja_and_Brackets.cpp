
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
    
#define amax(a) *max_element(a, a + n)
#define amin(a) *min_element(a, a + n)
#define vmax(a) *max_element(a.begin(), a.end())
#define vmin(a) *min_element(a.begin(), a.end())
using namespace std;
#define watch(x) cout << (#x) << " = " << (x) << endl
const int MOD = 1e9 + 7;
ll gcd(ll a, ll b) {if (b > a) {return gcd(b, a);} if (b == 0) {return a;} return gcd(b, a % b);}
ll mult(ll x, ll y) {ll res = x * y;return (res >= MOD ? res % MOD : res);}
ll factorial(ll v){ll ans=1;for(int i=2;i<=v;i++){ans*=i;ans%=MOD;}return ans;}
ll power(ll a, ll n){ll res = 1;while(n){if(n%2 == 1){res = (res * a)%MOD;n--;}else{a = (a * a)%MOD;n = n/2;}}return res;}
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

class SGTree {
	vector<int> seg;
public:
	SGTree(int n) {
		seg.resize(4 * n + 1);
	}
	void build(int ind, int low, int high, int arr[]) {
		if (low == high) {
			seg[ind] = arr[low];
			return;
		}
		int mid = (low + high) / 2;
		build(2 * ind + 1, low, mid, arr);
		build(2 * ind + 2, mid + 1, high, arr);
		seg[ind] = min(seg[2 * ind + 1], seg[2 * ind + 2]);
	}
	int query(int ind, int low, int high, int l, int r) {
		if (r < low || high < l) return INT_MAX;
		if (low >= l && high <= r) return seg[ind];
		int mid = (low + high) >> 1;
		int left = query(2 * ind + 1, low, mid, l, r);
		int right = query(2 * ind + 2, mid + 1, high, l, r);
		return min(left, right);
	}
	void update(int ind, int low, int high, int i, int val) {
		if (low == high) {
			seg[ind] = val;
			return;
		}
		int mid = (low + high) >> 1;
		if (i <= mid) update(2 * ind + 1, low, mid, i, val);
		else update(2 * ind + 2, mid + 1, high, i, val);
		seg[ind] = min(seg[2 * ind + 1], seg[2 * ind + 2]);
	}
};

void prakhar() {   
    
    string s;
    cin >> s ;
    
    int q;
    cin >> q ;

    int open[n];
    int close[n];
    int i = 0;
    for(auto it:s){
        if(it == '('){
            open[i] = 1;
            close[i] = 0;
        } else {
            open[i] = 0;
            close[i] = 1;
        }
    }

    int n = s.size();
    SGTree treeopen(n);
    SGTree treeclose(n);

    treeopen.build(0, 0, n-1, open);
    treeopen.build(0, 0, n-1, close);

    for (int i = 0; i < q; i++)
    {
        int l ,r;
        cin >> l >> r ;
        l--;
        r--;

        cout << min(treeopen)
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
    auto start = chrono::steady_clock::now();

    //  Insert the code that will be timed


    ll t = 1 ;
    cin >> t ;
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