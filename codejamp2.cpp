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
const int N = 1000000;
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
bool cmp1(const pair<int,int> &a,
              const pair<int,int> &b)
{
    return (a.ff > b.ff);
}
bool cmp2(const pair<int,int> &a,
              const pair<int,int> &b)
{
    return (a.ss < b.ss);
}

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
                    if( a > arr[i][0] )
                    a = arr[i][0];
<<<<<<< HEAD
                    if( b > arr[j][0] )
                    b = arr[j][0];
                    if( c > arr[k][0] )
                    c = arr[k][0];
                    if( d > arr[l][0] )
                    d = arr[l][0];
=======
                    if( b > arr[j][1] )
                    b = arr[j][1];
                    if( c > arr[k][2] )
                    c = arr[k][2];
                    if( d > arr[l][3] )
                    d = arr[l][3];
>>>>>>> c9e02e90849bb7e26aebda84ab12a03dab712569

                    // if( i !=j && i !=k && i !=l && j != k && j != l && k != l)
                    // {
                        // int p = (arr[i][0] + arr[j][1] + arr[k][2] + arr[l][3]);

                        // if( p == 1000000 && arr[i][0] !=0 && arr[j][1] !=0 && arr[k][2] !=0 && arr[l][3]!= 0)
                        // {
                        //     cout << arr[i][0] << " " << arr[j][1] << " " << arr[k][2] << " " << arr[l][3] << endl;
                        //     return;
                        // }
                    // }
                }
                
            }
            
        }
        
    }
    
<<<<<<< HEAD
    int min = a + b + c + d;
    if ( a != 0 && b != 0 && c != 0 && d != 0 && min == 1000000)
    {
        cout << a << " " << b << " " << c << " " << d << endl;
        return;
=======
    // cout << a << " " << b << " " << c << " " << d << endl;

    if( a >= N )
    {
        cout << N << " " << 0 << " " << 0 << " " << 0 << endl;
        return;
    }
    if( b >= N )
    {
        cout << 0 << " " << N << " " << 0 << " " << 0 << endl;
        return;
    }  
    if( c >= N)
    {
        cout << 0 << " " << 0 << " " << N << " " << 0 << endl;
        return;
    }  
    if( d >= N)
    {
        cout << 0 << " " << 0 << " " << 0 << " " << N << endl;
        return;
    }


    vii pv , tmp;
    pv.pb({a ,1 });
    pv.pb({b, 2});
    pv.pb({c, 3 });
    pv.pb({d , 4 });
            // cout << pv[0].ff << " " << pv[1].ff << " " << pv[2].ff << " " << pv[3].ff << endl;


    sort(all(pv) , cmp1);
    tmp = pv;

    int s1 = pv[0].ff + pv[1].ff;
    // cout << s1 << endl;

    if( s1 < N)
    {
        // cout << "hi";
        s1= s1 + pv[2].ff; 
>>>>>>> c9e02e90849bb7e26aebda84ab12a03dab712569
    }
    else
    {
        // cout << " hu";
        int dif = N - pv[0].ff;
        // cout << dif << endl;

        pv[1].ff = dif;
        pv[2].ff = 0 ;
        pv[3].ff = 0 ;
        // print ans
        // cout << pv[0].ff << " " << pv[1].ff << " " << pv[2].ff << " " << pv[3].ff << endl;
        sort(all(pv) , cmp2);

        // for(auto it:pv)
        // {
        //     cout << it.ff << " ";
        // }
        // cout << endl;
        cout << pv[0].ff << " " << pv[1].ff << " " << pv[2].ff << " " << pv[3].ff << endl;
        return;
        



    }

    if( s1 < N)
    {
        s1+=pv[3].ff;
    }
    else
    {
        int dif = N - pv[0].ff - pv[1].ff;

        pv[2].ff = dif;
        pv[3].ff = 0 ;
        // print ans
        sort(all(pv) , cmp2);
        cout << pv[0].ff << " " << pv[1].ff << " " << pv[2].ff << " " << pv[3].ff << endl;
        return;



    }

    if( s1 < N)
    {
        cout << "IMPOSSIBLE" << endl;
    }
    else
    {
        int dif = N - pv[0].ff - pv[1].ff - pv[2].ff;

        pv[3].ff = dif;
        // print ans
        sort(all(pv) , cmp2);
        cout << pv[0].ff << " " << pv[1].ff << " " << pv[2].ff << " " << pv[3].ff << endl;
        return;



    }






    // cout << "IMPOSSIBLE" << endl;
    
    

    
    

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
