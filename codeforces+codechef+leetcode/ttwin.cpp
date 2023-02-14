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
#define MAX 100001

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
vector<int> sieve()
{
    vector<bool> primes(MAX , true);
    for (int i = 2; i * i <= MAX; i++)
    {
        if(primes[i] == true)
        {

            for(int j = i * i ; j <MAX ; j+=i)
            {
                // cout << j << " " ;
                primes[j] = false;
            }
            // cout << endl; 
        }
    }


    vector<int> prime ;
    prime.push_back(2);
    for(int i = 3 ; i <= MAX ; i+=2){
        if(primes[i] == true)
        prime.push_back(i);
    }
     return prime;
}


void prakhar()
{
    int l , r ;
    cin >> l >> r;
    if( r - l > 1)
    {

    }
    else
    {
        cout << 0 << nline ;
        return;
    }

    vector<int> primes = sieve();
    // printvec(primes);

    vector<bool> isprime(r-l+1 , true);

    for(int i = 0 ; primes[i] * primes[i] <= r ; i++)
    {
        int curprime = primes[i];
        int base = (l/(curprime)) * curprime;
        // cout << base << " " << l << nline;
        if(base < l)
        base = base + curprime;
        
        for(int k = base ; k <=r ; k+=curprime)
        {
            // cout << k - l << endl;
            isprime[k - l] = false;
        }

        if( base == curprime )
        {
            isprime[base - l] = true;
        }
    }
    vector<int> ans;

    for(int i = 0 ; i<=r-l ; i++){
        // cout << isprime[i] << endl;
        if(isprime[i] == true)
        {
            ans.push_back(i + l );
        }
    }
    // printvec(ans);
    int cnt = 0 ;
    for(int i = 0 ; i <= ans.size() - 2 ; i++){

        if(ans[i+1] - ans[i] == 2)
        cnt++;
    }
    cout << cnt << nline ;



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
