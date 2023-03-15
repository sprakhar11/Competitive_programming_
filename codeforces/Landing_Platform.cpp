
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

void vmout(vector<vector<int>> &v)
{
    for(auto it:v){
        for(auto it2:it){
            cout << it2 << " ";
        }
        cout << endl;
    }
    cout << endl;
    
}

void prakhar() {   
    
    int n, m;
    cin >> n >> m ;

    vector<vector<int>> mt(n, vector<int>(m, 0));
    vector<vector<int>> pri(n, vector<int>(m, 0));
    vector<vector<int>> sec(n, vector<int>(m, 0));


    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cin >> mt[i][j];
        }
    }
    // vmout(mt);

    for(int i = 0 ; i < m ; i++){
        sec[0][i] = mt[0][i];
        pri[0][i] = mt[0][i];
    }
    for (int i = 1; i < n; i++){
        for (int j = 0; j < m; j++)
        {
            // cout << mt[i][j] << " " << sec[i-1][j+1] << endl;
            if(j != m-1)
                sec[i][j] = mt[i][j] + sec[i-1][j+1];
            else
                sec[i][j] = mt[i][j];

            if(j != 0)
                pri[i][j] = mt[i][j] + pri[i-1][j-1];
            else
                pri[i][j] = mt[i][j];
        }
    }
    // vmout(sec);
    // vmout(pri);
    
    int dia = 2 ;
    int ans = INT_MIN;
    int max_dia = min(n, m);
    while(dia <= max_dia){

        int r_l = n - dia;
        int c_l = m - dia;
        // int p = min(r_l, c_l);


        for (int i = 0; i <= r_l; i++)
        {
            for (int j = 0; j <= c_l; j++)
            {
                //primary dia sum
                int fr = i;
                int fc = j;
                int center = 0;
                if(dia % 2 != 0 ){
                    int  p = dia / 2;
                    center = mt[i + p ][j + p];
                }
                int lr = i + dia - 1;
                int lc = j + dia - 1;

                int sub = 0;
                if(fc != 0 && fr != 0)
                    sub = pri[fr-1][fc - 1];
                int sum1 = pri[lr][lc] - sub;

                //secondary sum col;

                fr = i;
                fc = j + dia - 1;
                lr = i + dia - 1;
                lc = j;
                sub = 0 ;
                if(fr != 0 && fc != m-1 )
                    sub = sec[fr - 1][fc + 1];
                
                int sum2 = sec[lr][lc] - sub;

                // cout << dia << " " << sum1 << " " << sum2 << " " << center<< endl;
                // cout << fr << " " << fc << " " << lr << " " << lc << endl;
                ans = max(ans, sum1 + sum2 - center);
            }
        }
        dia++;
    }
    cout << ans << endl;
       
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