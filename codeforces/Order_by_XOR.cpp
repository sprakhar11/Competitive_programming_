
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

void prakhar() { 

    int a, b , c ;
    cin >> a >> b >> c;
    string sa = to_binary(a);
    string sb = to_binary(b);
    string sc = to_binary(c);
    removeLeadingCharacters(sa, '0');
    removeLeadingCharacters(sb, '0');
    removeLeadingCharacters(sc, '0');

    int al = sa.length();
    int bl = sa.length();
    int cl = sc.length();
    int k = max(al, max(bl, cl));

    while(sa.length() < k){
        sa = '0' + sa;
    }
    while(sb.length() < k){
        sb = '0' + sb;
    }
    while(sc.length() < k){
        sc = '0' + sc;
    }

    vector<char> ans;

    int flag1 = 0;
    int flag2 = 0;
    int i = 0;

    // cout << sa << endl;
    // cout << sb << endl;
    // cout << sc << endl;
    // cout << endl;

    while(i < k){
        int take = 0;
        if(flag2 == 0){
            if(sc[i] == '1' && sb[i] == '0'){
                ans.pb('0');
                take = 1;
                flag2 = 1;
            } else {
                if(sc[i] == '0' && sb[i] == '1') {
                    take = 1;
                    sc[i] = '1';
                    sb[i] = '0';
                    ans.pb('1');
                    flag2 = 1;
                } else if(sb[i] == '0' && sc[i] == '1'){
                    flag2 = 1;

                    ans.pb('0');
                    take = 1;
                }
            }
        }

        // for(auto it:ans){
        //     cout << it; 
        // }
        // cout << endl;
        // cout << "1take " << take << " "  << endl;
        // cout << endl;


        if(flag1 == 0){

            if(take == 1){

                if(sa[i] == '0' && ans[i] == '1'){
                    cout << -1 << endl;
                    return;
                }

                if(sa[i] == '1' && ans[i] == '1'){
                }

                if(sa[i] == '1' && ans[i] == '0'){
                    cout << -1 << endl;
                    return;
                } 
                
                if(sa[i] == '0' && sb[i] == '1')
                    flag1 = 1;
                
            } else {
                
                if(sb[i] == '0' && sa[i] == '1'){
                    // cout << "i = " << i  << " " << sa << " " << sb << endl;
                    ans.pb('1');
                    sc[i] = '1';
                    sb[i] = '1';
                    sc[i] = '0';
                    flag1 = 1;
                    take = 1;

                } else {

                    ans.pb('0');
                    take = 1;

                }

                if(sa[i] == '0' && sb[i] == '1')
                    flag1 = 1;

            }
        } 
        // for(auto it:ans){
        //     cout << it; 
        // }
        // cout << endl;
        // cout << "2take " << take << endl;

        if(take == 0)   ans.pb('0');

        i++;
    }

    int sm = 0 ;
    int pp = ans.size();

    for(auto it:ans){
        if(it == '1'){
            sm = sm + pow(2,pp-1);
            
        }
        pp--;
    }
    // for(auto it:ans){
    //     cout << it; 
    // }
    // cout << endl;
    cout << sm << endl;
    // cout << (a ^ sm) << " " << (b ^ sm) << "  " << (c ^ sm) << endl;


    
    
       
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