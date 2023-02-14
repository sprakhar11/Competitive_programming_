#include <bits/stdc++.h>
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

void prakhar(){
    ll n;
   cin>>n;
  vector<ll>a(n),b(n);
 map<ll,vector<ll>>mp1,mp5;
  map<ll,ll>mp2,mp3;
  for(ll &x:a)
  cin>>x;
  ll k=0;
  for(ll &x:b)
  {
    cin>>x;
    mp1[x].pb(k);
    k++;
    // ll p=to_string(x).length();
    // ll pp=to_string(p).length();
    // mp2[p]+=1;
    // mp3[pp]+=1;
  }
 
  ll ans=0;
  // CASE 0
  map<ll,ll>ind;
  map<ll,ll>ind1;
  for(ll i=0;i<n;i++)
  {
    if(!mp1[a[i]].empty())
    {
      ind[mp1[a[i]][mp1[a[i]].size()-1]]=1;
      ind1[i]=1;
      mp1[a[i]].pop_back();
    } 
    
  }
  
  vector<ll>vv,vv1;
  for(ll i=0;i<n;i++)
  {
    if(ind1[i]!=1)
    vv1.pb(a[i]);
 
   if(ind[i]!=1)
    vv.pb(b[i]);
 
  }
  ind.clear();
  ind1.clear();
  b=vv;
  a=vv1;
vv.clear();
vv1.clear();
//cout<<ans<<"\n";
  // CASE 2
  for(ll &x:a)
  {
    if(x>9)
   {
      x=to_string(x).length();
      ans++;
   }
  }
    for(ll &x:b)
  {
    if(x>9)
   {
      x=to_string(x).length();
      ans++;
   }
  }
//   for(ll x:a)
//   cout<<x<<" ";
 
//   endd;
//    for(ll x:b)
//   cout<<x<<" ";
  
//   endd;
// cout<<ans<<"\n";
   k=0;
  for(ll x:b)
  {
    
    mp5[x].pb(k);
    k++;
    // ll p=to_string(x).length();
    // ll pp=to_string(p).length();
    // mp2[p]+=1;
    // mp3[pp]+=1;
  }
 
   for(ll i=0;i<a.size();i++)
  {
    if(!mp5[a[i]].empty())
    {
      ind[mp5[a[i]][mp5[a[i]].size()-1]]=1;
      ind1[i]=1;
      mp5[a[i]].pop_back();
    } 
    
  }
   for(ll i=0;i<a.size();i++)
  {
    if(ind1[i]!=1)
    vv1.pb(a[i]);
 
   if(ind[i]!=1)
    vv.pb(b[i]);
 
  }
  a=vv1;
  b=vv;
  //  for(ll x:a)
  // cout<<x<<" ";
 
  // endd;
  //  for(ll x:b)
  // cout<<x<<" ";
  
  // endd;
  for(ll x:a)
  {
    if(x!=1)
    ans+=1;
 
  }
 for(ll x:b)
  {
    if(x!=1)
    ans+=1;
    
  }
 cout<<ans<<"\n";
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