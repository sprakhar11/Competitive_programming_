#include <bits/stdc++.h>
#include <unordered_set>
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

int dfs(vector<vector<char>> &grid, vector<vector<int>> &visited, int n, int m, int a , int b)
    {
        
        if(a < 0 || a > n-1 || b < 0 || b > m-1)
        {
            return 0;
        }
        else
        {
            visited[a][b] = 1;
            cout << " inside dfs" << endl;
            // return 0;
            if(a-1 < 0 || a-1 > n-1 || b < 0 || b > m-1)
            {

            }
            else
            if(visited[a -1][b] == 0 && grid[a -1][b] == '1')
            {
                dfs(grid, visited, n , m , a-1, b);
            }

            if(a-1 < 0 || a-1 > n-1 || b+1 < 0 || b+1 > m-1)
            {

            }
            else
            if(visited[a-1][b+1] == 0 && grid[a-1][b+1] == '1')
            {
                dfs(grid, visited, n , m , a-1, b+1);
            }

            if(a < 0 || a > n-1 || b+1 < 0 || b+1 > m-1)
            {

            }
            else
            if(visited[a][b+1] == 0 && grid[a][b+1] == '1')
            {
                dfs(grid, visited, n , m , a, b+1);
            }

            if(a+1< 0 || a+1 > n-1 || b+1 < 0 || b+1 > m-1)
            {

            }
            else
            if(visited[a+1][b+1] == 0 && grid[a+1][b+1] == '1')
            {
                dfs(grid, visited, n , m , a+1, b+1);
            }

            if(a+1 < 0 || a+1 > n-1 || b < 0 || b > m-1)
            {

            }
            else
            if(visited[a+1][b] == 0 && grid[a+1][b] == '1')
            {
                dfs(grid, visited, n , m , a+1, b);
            }

            if(a+1< 0 || a+1 > n-1 || b-1 < 0 || b-1 > m-1)
            {

            }
            else
            if(visited[a+1][b-1] == 0 && grid[a+1][b-1] == '1')
            {
                dfs(grid, visited, n , m , a+1, b-1);
            }

            if(a < 0 || a > n-1 || b-1 < 0 || b-1 > m-1)
            {

            }
            else
            if(visited[a][b-1] == 0 && grid[a][b-1] == '1')
            {
                dfs(grid, visited, n , m , a, b-1);
            }

            if(a-1 < 0 || a-1 > n-1 || b-1 < 0 || b-1 > m-1)
            {

            }
            else
            if(visited[a-1][b-1] == 0 && grid[a-1][b-1] == '1')
            {
                dfs(grid, visited, n , m , a-1, b-1);
            }
        }
        
        return 0;
        
    }
    
    int numIslands(vector<vector<char>>& grid) {
        // Code here
        int n = grid.size();
        int m = grid[0].size();

        // cout << n  << " " << m ; 
        // return 0;
        
        vector<vector<int>> visited;
        
        for(int i = 0 ; i < n; i++)
        {
            vector<int> tmp;
            for(int j = 0 ; j < m ; j++)
            {
                tmp.push_back(0);
            }
            visited.push_back(tmp);
        }
        // visited array is ready
        int islands = 0;

        for(int i = 0 ; i < n; i++)
        {
            for(int j = 0 ; j < m ; j++)
            {
                cout << visited[i][j] << " ";
            }
            cout << endl;
        }
        // apply dfs from position 0 , 0
        
        cout << " hit1\n";
       

        
        for(int i = 0 ; i < n; i++)
        {
            for(int j = 0 ; j < m ; j++)
            {
                if(visited[i][j] == 0 && grid[i][j] == '1')
                {
                    islands++;

                    cout << " first  dfs started \n";
                    

                    dfs(grid, visited, n, m, i ,j);
                    
                    cout << " one dfs done \n";
                    for(int i = 0 ; i < n; i++)
                    {
                        for(int j = 0 ; j < m ; j++)
                        {
                            cout << visited[i][j] << " ";
                        }
                        cout << endl;
                    }
                    
                    
                }
            }
        }
        
        return islands;
        
        
    }

void prakhar()
{
    int n , m;
    cin >> n >> m;

    vector<vector<char>> grid;

    for (int i = 0; i < n; i++)
    {
        vector<char> tmp;
        for (int j = 0; j < m; j++)
        {
            char ch ;
            cin >> ch;
            tmp.pb(ch);

        }
        grid.pb(tmp);
        
    }
    
    int ans = numIslands(grid);

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
    ll t = 1 ;
    // cin >> t ;
    int ii;
    for ( ii = 1; ii <= t; ii++) {
        //  cout << "Case #" << i <<": ";
        prakhar();
    }
    
    return 0;
    
}