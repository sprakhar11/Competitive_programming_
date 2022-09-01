#include <bits/stdc++.h>
#define ll long long 
#define int long long 
#define MOD1 998244353
#define INF 1e18
#define endl "\n"
#define vi vector<int>
#define vii vector<pair<int, int>>
#define vs vector<string>
#define vc vector<char>ṇ
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

int ans1 = 0;
vector<int> ans2;
int f = 1 ;
void fun(int low, int high, vector<int> &v)
{
    for(int i = low ; i < high  ; i++)
    {
        if(v[i] > v[i+1])
        {
            if(f == 1){
            ans1 += min( i - low + 1 , (high - low - ( i - low )) );
            // cout << i - low + 1 << " " << high - low - (i - low )  << endl;

            }
            // cout << "ans1 " << ans1 << endl;
            // cout <<"break "<< i+1  << " " << (high - low - i)<< endl;
            // cout <<"l i h "<< low << " "<< i << " " << high << endl;
            fun(low, i, v);
            fun(i+1, high, v);
            f = 0 ;

        }
    }

    if( low == 0 && (high == v.size() - 1))
    {

    }
    else{

        if ( f == 1 ){

        // cout << "pushed" << high - low + 1 << endl;
        ans2.push_back(high - low + 1);
        }
    }

}
void prakhar() {   
    int n;
    cin >> n;
    vector<vector<int>> v;
    vi len;

    for (int i = 0; i < n; i++)
    {
        int k;
        cin >> k ;
        vi tmp;
        len.pb(k);
        for (int i = 0; i < k; i++)
        {
            int x ;
            cin >> x ;
            tmp.pb(x);
        }
        v.push_back(tmp);

    }
    int fans = 0;

    for (int i = 0; i < n; i++)
    {
        ans1 = 0 ;
        ans2.clear();
        f = 1 ;
        int l = v[i].size();
        fun(0 , l - 1 , v[i]);



        sort(all(ans2));

        // for(auto it:ans2)
        // {
        //     cout << it << endl;
        // }

        int temp = 0;
        if( ans2.size() !=0 ){
            int p = ans2[0];
            for (int j = 1; j < ans2.size(); j++)
            {
                p += ans2[j];
                temp +=p;
                p = temp;
            }
        }
        // cout << "ans1 " << ans1 << endl;
        // cout << "temp " << temp << endl;
        fans += ans1 + temp;
        // cout << "fans " << fans << endl;
        


    }

    int temp = 0;
    // cout << "len " << len.size() << endl;
    if(len.size() != 0)
    {
        int p = len[0];
        for (int j = 1; j < len.size(); j++)
        {
            p += len[j];
            temp +=p;
            p = temp;
        }
    }
    cout << temp + fans << endl ; 
    


    
    
    
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