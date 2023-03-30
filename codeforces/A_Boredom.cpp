
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

int fun(vector<int> &v, int &n, int i, int f, int sum,vector<int> &tmp){

        if(tmp[i] != -1)
            return tmp[i];

        if(i >= n){
            // tmp[i] = sum;
            return sum;
        }

        int a , b;
        if(f == 1){
            a = fun(v, n, i + 1, !f, sum, tmp);
        } else {
            b = max(fun(v, n, i+1, f, sum, tmp),
                        fun(v, n, i+1, !f, sum + v[i], tmp));
        }

        tmp[i] = max(a, b);

        return 0;

        
    }

    int rob1(vector<int>& v) {

        int n = v.size();
        if(n == 0)
        {
            return 0;
        }

        if(n == 1)
            return v[0];
        if(n == 2)
            return max(v[0], v[1]);
        
        vector<int> tmp;

        tmp.push_back(v[0]);
        tmp.push_back(max(v[0],v[1]));

        for(int i = 2 ; i < n ; i++){
            tmp.push_back(max(tmp[i-1], v[i] + tmp[i-2]));
        }
        return tmp[tmp.size() - 1];


        fun(v, n, 0, 0, 0, tmp);
        // for(auto it:tmp){
        //     cout << it << " ";
        // }
        return tmp[n-1];
    }

    int rob(vector<int>& nums) {

        int n = nums.size();
        if (n == 1)
            return nums[0];

        vector<int> v1,v2;

        for(int i = 0 ; i < n ; i++){
            if(i != 0){
                v1.push_back(nums[i]);
            }

            if(i != n-1){
                v2.push_back(nums[i]);
            }
        }

        return max(rob1(v1) , rob1(v2));
        
    }

    int deleteAndEarn(vector<int>& v) {

        map<int, int> mp;

        for(auto it:v)
            mp[it]++;
        
        vector<int> v1(100005, 0);

        for(int i = 0 ; i < 100005; i++){
            v1[i] = i * mp[i];
        }

        return rob(v1);
        
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
        int n;
        cin >> n ;
        vi v;
        vin(v, n);

        cout << deleteAndEarn(v);
    }

    auto end = chrono::steady_clock::now();

    auto diff = end - start;
    cerr << chrono::duration <double, nano> (diff).count() << " ns" << endl;
    
    return 0;
    
}