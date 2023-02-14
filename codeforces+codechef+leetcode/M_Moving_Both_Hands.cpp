#include <bits/stdc++.h>
#define ll int
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
 
 
//---------------------------------------------------------CODE HERE ----------------------------------------------------------------------------------------------------------

struct PQ{
public:
    int key;
    int value;
  
};

 auto comp = [](PQ a, PQ b) 
 {
        //comparison logic
        if (a.value < b.value)
            return false;
        else if (a.value > b.value)
            return true;
        else { // when value are same
            if (a.key < b.key) {
                return false;
            }
            else
                return true;
        }
  };


class Solution
{
	public:
	
    vector <int> dijkstra(int V, vector<vector<int>> adj[], int S)
    {
        priority_queue<PQ, vector<PQ>, decltype(comp)> pq(comp);   // (value,weight)
   
       vector<bool>vis(V+1,false);
       pq.push({S,0});
       
       vector<ll>ans(V+1,INF);  // Check by putting infinity
       ans[S]=0;
       while(!pq.empty())
       {
        auto tp=pq.top();
        if(vis[tp.key])
        {
            pq.pop();
            continue;
        }
        
        vis[tp.key]=true;
        pq.pop();
       // cout<<"*"<<tp.key<<" "<<ans[tp.key]<<" \n";
        for(auto x:adj[tp.key])
        {
          if(!vis[x[0]])
          {
              //cout<<"**"<<x[0]<<" "<<x[1]+ ans[tp.key]<<" \n";
             if(ans[x[0]]>x[1]+ans[tp.key])
             {
                 pq.push({x[0],x[1]+ans[tp.key]});   // Concentrate here we pushed edge wait + shortest distance of it's parent from source;
                 ans[x[0]]=x[1]+ans[tp.key];
             }
          }
        }
       }
       return ans;
    }
};

void solve()
{
  
 int V, E;
        cin >> V >> E;
        vector<vector<int>> adj[V+1],adj1[V+1];   // Change to v+1 for vertices staring from 1
        int i=0;
        while (i++<E) {
            int u, v, w;
            cin >> u >> v >> w;
            vector<int> t1,t2;
            t1.push_back(v);
            t1.push_back(w);
            t2.push_back(u);
            t2.push_back(w);
            adj[u].push_back(t1);
            adj1[v].push_back(t2);
           
        }
        //int S;       This is for source if not default
        //cin>>S;
        
        Solution obj;
    	vector<int> res = obj.dijkstra(V, adj, 1);
        vector<int>res2= obj.dijkstra(V, adj1, 1);
        vector<ll>ans(V+1);
        for(ll i=1;i<=V;i++)
        {
           
            ans[i]=min(res[i],res2[i]);
        }
        priority_queue<pair<ll,ll>,vector<pair<ll,ll>>,greater<pair<ll,ll>>>pq;
        for(ll i=2;i<=V;i++)
        pq.push({ans[i],i});
        vector<ll>final(V+1,INF);
        while(!pq.empty())
        {
            auto x=pq.top();
            ll value=x.first;
            ll vertex=x.second;
            pq.pop();
            if(final[vertex]<value) continue;
            final[vertex]=value;
            for(auto xx:adj1[vertex])
            {
                if(final[xx[0]]>xx[1]+final[vertex])
                {
                    final[xx[0]]=xx[1]+final[vertex];
                    pq.push({final[xx[0]],xx[0]});
                }
            }
        }
        for(ll i=2;i<=V;i++)
        {
                if(final[i]==INF)
               {
                cout<<-1<<" ";
                continue;
                }
                cout<<final[i]<<" ";
        }
        cout<<"\n";
        
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
    //in >> t ;
    for (int i = 0; i < t; i++) {
        solve();
    }
    
    return 0;
    
}