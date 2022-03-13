#include <bits/stdc++.h>
#define lli long long 
#define int long long 
#define MOD1 998244353
#define INF 1e18
#define nline "\n"
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define ff first
#define ss second
#define PI 3.141592653589793238462
#define set_bits __builtin_popcountll
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()

using namespace std;
//prakhar_0007
const int MOD = 1e9 + 7;
lli gcd(lli a, lli b) {if (b > a) {return gcd(b, a);} if (b == 0) {return a;} return gcd(b, a % b);}
lli mult(lli x, lli y) {lli res = x * y;return (res >= MOD ? res % MOD : res);}
lli factorial(lli v){lli ans=1;for(int i=2;i<=v;i++){ans*=i;ans%=MOD;}return ans;}
lli power(lli x, lli y){   if (y < 0)return 1;lli res = 1; x %= MOD;while (y!=0) {if ((y & 1)==1)res = mult(res, x); y >>= 1;x = mult(x, x);} return res;}
vector<lli> sieve(int n) {int*arr = new int[n + 1](); vector<lli> vect; for (int i = 2; i <= n; i++)if (arr[i] == 0) {vect.push_back(i); for (int j = 2 * i; j <= n; j += i)arr[j] = 1;} return vect;}
void vectorinput( vector<int> &v , int n ){for (int i = 0; i < n; i++){int x ;cin >> x;v.push_back(x);}}
void printvec(vector<int> &v){for (int i = 0; i < v.size(); i++){cout << v[i] << " " ;}cout << endl;}

void prakhar()
{
    int n ;
    cin >> n ;
    vector<int> v;
    vectorinput(v, n);
    if(n == 1)
    {
        cout << v[0] + 1 << endl;
        return;
    }
    vector<int> pregcd = v ;
    vector<int> sufgcd = v ;
    // prefix gcd
    for(int i = 1 ; i < n ; i++){ pregcd[i] = gcd( pregcd[i] , pregcd[i-1] );}
    //suffix gcd
    for(int i = n-2 ; i >=0 ; i--){ sufgcd[i] = gcd( sufgcd[i] , sufgcd[i+1] );}

    for (int i = 1; i < n -1; i++)
    {
        if( v[i] % gcd( pregcd[i-1] , sufgcd[i+1]) !=0)
        {
            cout << gcd( pregcd[i-1] , sufgcd[i+1]) << nline ;
            return;
        }
    }
    if(v[0] % sufgcd[1] !=0)
    {
        cout << sufgcd[1] << nline;
        return;
    }
    if( v[n-1] % pregcd[n-2] != 0)
    {
        cout << pregcd[n-2] << nline;
        return;
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
    lli t = 1 ;
    // cin >> t ;
    for (int i = 0; i < t; i++)
    {
        prakhar();
    }
    
    return 0;
    
}
