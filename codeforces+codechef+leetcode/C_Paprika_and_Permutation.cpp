#include <bits/stdc++.h>
#define ll long long 
#define int long long 
#define MOD1 998244353
#define INF 1e18
#define endl "\n"
#define lb lower_bound
#define ub upper_bound
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
// void infyprakhar( int val , vector<int> &v)
// {
//     for (int i = 1; i < v[i]; i++)
//     {
//        int k = v[i] % i ;
//        if(k < sz(ans))
//        {
//            ans[k]++;
//        }
//     }
    
// }
void prakhar()
{   
    // int n ;
    // cin >> n;
    // vector<int> v;
    

    // vector<int> ans(n+1, 0);
    // vin(v , n);
    // if(n==1 && v[0] == 1)
    // {
    //     cout << 0 << endl;
    //     return;
    // }
    // int c = count(all(v) , 1 );
    // if( c > 1)
    // {
    //     cout << -1 << endl;
    //     return;
    // }
    // sort(all(v));
    
    // vi dup;
    // vi mis;
    // for (int i = 0; i < n; i++)
    // {
    //     if( v[i] <= n)
    //     {
    //         ans[v[i]]++;
    //     }
    //     else
    //     {
    //         dup.pb(v[i]);
            
    //     }
    // }
    // int cnt1 = 0 ;
    // int maxnf = 0;
    // int minnf = 0 ;
    // for (int i = 1; i < n+1; i++)
    // {
    //     if(ans[i] >1)
    //     {
    //         while(ans[i]--)
    //         dup.pb(i);
    //     }
    //     if(ans[i]==0)
    //     {
    //         if(minnf ==0)
    //         {
    //             minnf = i;
    //         }
    //         mis.pb(i);
    //         cnt1++;
    //         maxnf = i;
    //     }
    // }

    // sort(all(dup));
    // vi mc;
    // for (int i = 0; i < sz(dup); i++)
    // {
    //     if(dup[i]% 2 == 0)
    //     {
    //         dup[i] -=2;
    //     }
    //     int p = dup[i] / 2 ;
    //     mc.pb(p);
    // }
    // if(sz(mis) == 0)
    // {
    //     cout << 0 << endl;
    //     return;
    // }
    // sort(all(mc));
    // if( (minnf <= mc[0]) && (maxnf <= mc[sz(mc) - 1])&& (cnt1 <= sz(mc)))
    // {
    //     cout << cnt1 << endl;
    // }
    // else
    // {
    //     cout << -1 << endl;
    // }
        int n;
        cin >> n;
        set<int> st;
        for(int i=1;i<=n;i++){st.insert(i);}
        vector<int> rem;
        for(int i=0;i<n;i++){
            int v;
            cin >> v;
            if(st.find(v)!=st.end()){st.erase(v);}
            else{rem.push_back(v);}
        }
        sort(rem.begin(),rem.end());
        reverse(rem.begin(),rem.end());
        int pt=0;
        bool err=false;
        for(auto &nx : rem){
            auto it=st.end();
            it--;
            int ctg=(*it);
            if(ctg>(nx-1)/2){err=true;break;}
            st.erase(it);
        }
        if(err){cout << "-1\n";}
        else{cout << rem.size() << '\n';}


    

    
    
    
    



    
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
