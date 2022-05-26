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

ll t = 1 ;
int p;

bool** dp;
int flag = 0;

 
void display(const vector<int>& v)
{
    cout << v.size() << endl;

    for (int i = 0; i < v.size(); ++i)
        cout << v[i] << " ";
    
    cout << endl;
    flag = 1;

}
 
// A recursive function to print all subsets with the
// help of dp[][]. Vector p[] stores current subset.
void printSubsetsRec(int arr[], int i, int sum, vector<int>& p)
{
    // If we reached end and sum is non-zero. We print
    // p[] only if arr[0] is equal to sum OR dp[0][sum]
    // is true.
    if(flag == 1)
    return;

    if (i == 0 && sum != 0 && dp[0][sum])
    {
        p.push_back(arr[i]);
        // Display Only when Sum of elements of p is equal to sum
          if (arr[i] == sum)
              display(p);
        return;
    }
 
    // If sum becomes 0
    if (i == 0 && sum == 0)
    {
        display(p);
        return;
    }
 
    // If given sum can be achieved after ignoring
    // current element.
    if (dp[i-1][sum])
    {
        // Create a new vector to store path
        vector<int> b = p;
        printSubsetsRec(arr, i-1, sum, b);
    }
 
    // If given sum can be achieved after considering
    // current element.
    if (sum >= arr[i] && dp[i-1][sum-arr[i]])
    {
        p.push_back(arr[i]);
        printSubsetsRec(arr, i-1, sum-arr[i], p);
    }
}
 
// Prints all subsets of arr[0..n-1] with sum 0.
void printAllSubsets(int arr[], int n, int sum)
{
    if (n == 0 || sum < 0)
       return;
 
    // Sum 0 can always be achieved with 0 elements
    dp = new bool*[n];
    for (int i=0; i<n; ++i)
    {
        dp[i] = new bool[sum + 1];
        dp[i][0] = true;
    }
 
    // Sum arr[0] can be achieved with single element
    if (arr[0] <= sum)
       dp[0][arr[0]] = true;
 
    // Fill rest of the entries in dp[][]
    for (int i = 1; i < n; ++i)
        for (int j = 0; j < sum + 1; ++j)
            dp[i][j] = (arr[i] <= j) ? dp[i-1][j] ||
                                       dp[i-1][j-arr[i]]
                                     : dp[i - 1][j];
    if (dp[n-1][sum] == false)
    {
        // printf("There are no subsets with sum %d\n", sum);
        return;
    }
 
    // Now recursively traverse dp[][] to find all
    // paths from dp[n-1][sum]
    vector<int> p;
    printSubsetsRec(arr, n-1, sum, p);
}

void prakhar() {  
    int n, x , y ;
    cin >> n >> x >> y;
    cout << "Case #" << p+1 << ": " ;
    flag = 0;

    int tol_sum = n * (n + 1) ;
    tol_sum = tol_sum / 2 ;

    int num = tol_sum * x;
    int den = x + y ;

    if( num % den == 0) {

        int subset = num / den;

        int arr[n];

        for (int i = 0; i < n; i++)
        {
            arr[i] = i+1;
        }
        cout << "POSSIBLE" << endl;
        printAllSubsets(arr, n, subset);
        


    } else {
        cout << "IMPOSSIBLE" << endl;
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
    cin >> t ;
    for (p = 0; p < t; p++) {
        prakhar();
    }
    
    return 0;
    
}
