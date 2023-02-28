

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

bool mysort(pair<int, int> &a, pair<int, int> &b){
    return a.ff < b.ff;
}
bool mysort2(pair<int, int> &a, pair<int, int> &b){
    return a.ss < b.ss;
}

void printans(vector<pair<int, int>> ans, int op) {

    cout << op << endl;
    if(op != 0)
    for(auto it:ans){
        cout << it.ff << " " << it.ss <<  endl;
    } 
}

void fun(int ind, vector<pair<int, int>> &vp, int &op, int n, vector<pair<int, int>> &ans){


    sort(all(vp), mysort2);
    
    // cout << endl;
    for(auto it:ans){
        // cout << it.ff << " " << it.ss <<  endl;
    } 
    // cout << ind + 1 << endl;
    // return;
    
    for(int j = 0; j < n; j++){

        int curr = vp[j].ff;
        int index = vp[j].ss;


        if(curr != 2 && curr > 2){
            
            while (ceil((double)curr/(double)2) != 1 && curr != 2) 
            {
                curr = ceil((double)curr/(double)2);
                op++;
                ans.pb({index + 1, ind + 1});
            }
        }
        vp[j].ff = curr;

        // cout << "curr= " << curr << endl;
    }

    // cout << endl;
    // for(auto it:ans){
    //     cout << it.ff << " " << it.ss <<  endl;
    // } 

    // return;

    

    printans(ans, op);

}



void prakhar() { 

    vector<pair<int, int>> vp;
    int n ;
    cin >> n ;

    vi v;
    vin(v, n);

    for (int i = 0; i < n; i++)
    {
        vp.pb({v[i], i});
    }

    sort(all(v));

    int char_cnt = 0;
    int f = v[0];

    for (int i = 0; i < n; i++)
    {
        if(v[i] == v[0]){
            char_cnt++;
        }
    }
    
    if(char_cnt == n){
        cout << 0 << endl;
        return;
    }
    if(f == 1){
        cout << -1 << endl;
        return;
    }
    vector<pair<int, int>> ans;
    int op = 0;




    





    
    
    sort(all(vp), mysort);
    for(auto it:vp){
        // cout << it.ff << " " << it.ss <<  endl;
    } 
    // cout << endl;


    for (int i = 0; i < n-1; i++)
    {
        int l = vp[i].ff;
        int r = vp[i+1].ff;
        int l_in = vp[i].ss;
        int r_in = vp[i+1].ss;
        vector<pair<int, int>> tmp;
        int tmp_op = 0;



        if(l == 2){
            fun(l_in, vp, op, n, ans);
            return;
        }

        if(l == r) continue;
        

        while(ceil((double)r/(double)l) != 1 && r != 2){
            r = ceil((double)r/(double)l);
            // cout << r << endl;
            // return;
            tmp_op++;
            tmp.pb({r_in + 1, l_in + 1});
            // return; 
        }

        // cout << l << " " << r << endl;
        // return;
 

        if(r == 2){
            //bingo you got the answer
            // cout << ans.size();
            for(auto it:tmp){
                ans.pb({it.ff, it.ss});
            }
            op += tmp_op;
            vp[i+1].ff = r;
            fun(r_in, vp, op, n, ans);
            return;
        }

        // cout << l << " " << r << endl;
    }

    op = 0;
    ans.clear();

    for (int i = 0; i < n-1; i++)
    {
        int l = vp[i].ff;
        int r = vp[i+1].ff;
        int l_in = vp[i].ss;
        int r_in = vp[i+1].ss;

        if(l == r) continue;
        

        while(ceil((double)r/(double)l) != 1){
            r = ceil((double)r/(double)l);
            // cout << r << endl;
            // return;
            op++;
            ans.pb({r_in + 1, l_in + 1});
            // return; 
        }

        vp[i+1].ff = r;

        // cout << l << " " << r << endl;
        // return

        // cout << l << " " << r << endl;
    }

    int cnt = 0;
    int q = vp[0].ff;

    for(auto it:vp){
        // cout << it.ff << " " << it.ss <<  endl;
        if(it.ff == q){
            cnt++;
        } 
    }

    if(cnt == n){
        cout << op << endl;
        for(auto it:ans){
            cout << it.ff << " " << it.ss <<  endl;
        } 
    } 
    else
    cout << -1 << endl;
       
}

void solve(){
    int n;
    cin >> n ;
    vi v;
    vin(v, n);

    
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