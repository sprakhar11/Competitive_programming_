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
string to_binary(int n) { string s = ""; for (int i = 31; i >= 0; i--) { int k = n >> i; if (k & 1) s = s + "1";else s = s + "0";}return s ; }
static void removeTrailingCharacters(std::string &str, const char charToRemove) {str.erase (str.find_last_not_of(charToRemove) + 1, std::string::npos );}
static void removeLeadingCharacters(std::string &str, const char charToRemove) {str.erase(0, std::min(str.find_first_not_of(charToRemove), str.size() - 1));}
int  t ;
void prakhar(int caseq )
{   
    // vi a, b , c ;
    cout << "Case #" << caseq+1 <<": " ;

    int arr[3][4];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> arr[i][j] ;
        }
        
    }
    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 4; j++)
    //     {
    //         cout << arr[i][j] << " ";
    //     }
    //     cout << endl;
        
    // }
    
    int a = arr[0][0];
    int b = arr[0][1];
    int c = arr[0][2];
    int d = arr[0][3];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                for (int l = 0; l < 3; l++)
                {
                    if( a < arr[i][0] )
                    a = arr[i][0];
                    if( b < arr[j][0] )
                    b = arr[j][0];
                    if( c < arr[k][0] )
                    c = arr[k][0];
                    if( d < arr[l][0] )
                    d = arr[l][0];

                    // if( i !=j && i !=k && i !=l && j != k && j != l && k != l)
                    // {
                        int p = (arr[i][0] + arr[j][1] + arr[k][2] + arr[l][3]);

                        if( p == 1000000 && arr[i][0] !=0 && arr[j][1] !=0 && arr[k][2] !=0 && arr[l][3]!= 0)
                        {
                            cout << arr[i][0] << " " << arr[j][1] << " " << arr[k][2] << " " << arr[l][3] << endl;
                            return;
                        }
                    // }
                }
                
            }
            
        }
        
    }
    
    vii pv ;
    pv.pb({a , 1});
    pv.pb({b , 2});
    pv.pb({c , 3});
    pv.pb({d , 4});

    sort(all(pv));

    int arr2[4];

    for(auto it:pv)
    {
        if( it )
    }
    

    cout << "IMPOSSIBLE" << endl;
    
    

    
    

}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("error.txt", "w", stderr);
    #endif
    // ll t = 1 ;
    cin >> t ;
    for (int i = 0; i < t; i++)
    {
        prakhar(i);
    }
    
    return 0;
    
}
