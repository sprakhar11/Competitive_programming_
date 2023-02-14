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
int n;
vector<priority_queue<int>> adj;
void addEdge(int v,int w)
{
    adj[v].push(w);
    adj[w].push(v);
}

int pathcheck(int s,int d)
{int cnt = 0;
    if(s == d)
        return cnt;
 
    // int n= (int)adj.size();
     
    vector<bool> visited(n,false);
 
    // priority_queue<int> q;
    visited[s]= true;
    // q.push(s);
    
    while(true)
    {
       
         priority_queue<int> g = adj[s];
         int f = 0 ;
            while (!g.empty()) {
                int x = g.top();
                if( x <= s)
                {
                    break;
                }
                if(x == d)
                        return cnt;
        
                    if(!visited[x])
                    {
                        visited[x] = true;
                        f = 1 ;
                        cnt++;
                        break;
                    }
                
            }
        // for(auto x:adj[s])
        // {
 
        //     if(x == d)
        //         return cnt;
  
        //     if(!visited[x])
        //     {
        //         visited[x] = true;
        //         q.push(x);
        //         cnt++;
        //         break;
        //     }
        // }
        if( sz(adj[s]) == 0 || f==0 )
        cnt++;
        s++;
        // q.push(s);
        if(s == n)
        break;
    }
    return cnt;
}
void prakhar()
{   
    int  m ;
    cin >> n >> m ;
    
    adj = vector<priority_queue<int>>(n);
    for (int i = 0; i < m; i++)
    {
        int p , q ;
        cin >> p >> q ;
        addEdge(p-1,q-1);
    }
    // cout << "HI" << endl;
    int ans = pathcheck( 0 , n -1);

    cout << ans << endl;

    // int i = 1 ;
    // int j - n-1;
    // while(true)
    // {
    //     if(pathcheck(i , j))
    //     {
            
    //     }
        
    // }
    





    // if(pathcheck(0 , n-1 ))
    // {
    //     cout << 0 << endl;
    //     return;
    // }
    // else
    // {
    //     int cnt = 0  ;
    //     int f  = 0 ;
    //     for (int i = 0; i < n-1; i++)
    //     {
    //         f = 0 ;
    //         for(auto it:adj[i])
    //         {
    //             if(it == i+1)
    //             {
    //                 f = 1 ;
    //                 break;
    //             }
    //         }
    //         if( f == 0)
    //         cnt++;
    //     }
    //     cout << cnt << endl;
        
    // }
    


    // int cnt = 0 ;
    
    // for (int i = 1; i < n; i++)
    // {

    //     cout << i << i + 1 << endl;
    //     cout << adj[i][i+1] << endl;
    //     if( adj[i][i+1] != 1)
    //     {
    //         cnt++;
    //     }
    // }
    // cout << cnt << endl;

    
    
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
    for (int i = 0; i < t; i++)
    {
        prakhar();
    }
    
    return 0;
    
}
