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
int c , p ;
map<string, map<string , int>> names; // map key stores name of person, next map key stores skill associated with person and skill level
map<string, vector<int> > projects;
map<string, map<string , int>> proles;
map<string , vector<pair<string , int>>> proskillsort;


void input()
{
    
    cin >> c >>p;

    for (int i = 0; i < c; i++)
    {
        string na;
        cin >> na;
        int r= 0;
        cin >>r;
        for (int j = 0; j < r; j++)
        {
            string s ;
            cin >> s ;
            int level = 0;
            cin >> level;
            names[na][s]=level;
        }
        
    }

    // for(auto it:names)
    // {
    //     auto it3 = it.ss;
    //     cout << it.ff << endl;
    //     for(auto it2:it3)
    //     {
    //         cout << it2.ff << " " << it2.ss << endl;
    //     }
    // }

    for (int i = 0; i < p; i++)
    {
        string p ;
        cin >> p ;
        int a , b , c , d;
        cin >> a >> b >> c >> d;
        projects[p].pb(a);
        projects[p].pb(b);
        projects[p].pb(c);
        projects[p].pb(d);

        for (int j = 0; j < d; j++)
        {
            string s ;
            cin >> s ;
            int len ;
            cin >> len ;
            proles[p][s] = len;
            proskillsort[p].pb({s , len});
        }
        
    }

    // for(auto it:projects)
    // {
    //     cout << it.first << endl;
    //     auto it2 = it.second;
    //     for(auto it3: it2)
    //     {
    //         cout << it3 << " ";
    //     }
    //     for (int i = 0; i < it2[3]; i++)
    //     {
    //         for(auto it4:proles[it.ff])
    //         {
    //             cout << it4.ff<< it4.ss << endl;
    //         }
    //     }
        
    // }

}
// map<string, map<string , int>> names; // map key stores name of person, next map key stores skill associated with person and skill level
// map<string, vector<int> > projects;
// map<string, map<string , int>> proles;
map<string, float> ratiom;
bool cmp(pair<string, float> &a,
         pair<string, float> &b)
{
  return a.second < b.second;
}
void sortbyvalue(map<string, float> &M, vector<pair<string, float>> &A)
{

  for (auto &it : M)
  {
    A.push_back(it);
  }

//   sort(A.begin(), A.end(), cmp);
//    for (auto& it : A) {

//           cout << it.first << ' '
//                << it.second << endl;
//       }
}
vector<pair<string, float>> ratiov;  // project name is sorted by ratio of days reqd and best before day
// map<string, map<string , int>> names; // map key stores name of person, next map key stores skill associated with person and skill level
// map<string, vector<int> > projects; // project information details
// map<string, map<string , int>> proles; // project name,skill and level
map<string, map<string,int>> roleslevel; // skill, contributor name , skill level
// map<string , vector<pair<string , int>>> proskillsort; project name, skill name, level for final printing of order of roles

void algo()
{
    for (auto it:projects)
    {
        float d = it.ss[0] / (it.ss[2]* 1.0);
        // cout << d << endl;
        ratiom[it.ff]=d;
        

    }
    
    sortbyvalue( ratiom, ratiov );

    

    for(auto it:names)
    {
        for(auto it2:it.ss)
        {
            roleslevel[it2.ff][it.ff] = it2.ss;
        }

    }

    for(auto it:roleslevel)
    {
        // cout << it.ff << endl;
        for(auto it2:it.ss)
        {
            // cout << it2.ff << " " << it2.ss << endl;
        }
    }
    
    vector<string> pans; // project names
    vector<string> cans; // contributor names
    vector<pair<string , vector<string> > > finalans; // final answer:- project name + contributor names
    
    // map<string, map<string , int>> ansun ; // project name, contributor name  
    
    set<string> cdone;
    for(auto it:ratiov) // access project by ratios
    {
        int  cnt = 0 ;
        // ans.clear();
        cdone.clear();
        pans.pb(it.ff);
        for(auto it2:proskillsort[it.ff]) // it2 -> pair{skill name, level} of accessed project
        {
            string s = it2.ff; // project ka skill
            
            int level = it2.ss;
            // ans.pb(0);
            for(auto it3:names) // name of person, skill name, and level MAP<STRING,MAP>
            {
                if(cdone.find(it3.ff) == cdone.end())
                {
                    bool check = false;
                    for(auto it4: it3.ss) 
                    {
                        if(it4.ff == s && it4.ss > level )
                        {
                            cans.pb(it3.ff);
                            cdone.insert(it3.ff);
                            
                            cnt++;
                            check = true;
                            break; //
                        }
                    }
                    if(check) break;
                }
            }


        }

        if( cnt == sz(proles[it.ff]))
        {
            finalans.pb({it.ff, cans});
        }
        else
        {
            cans.clear();
            pans.clear();
        }

    }

    //printing
    cout<< sz(finalans) << endl;
    for(auto it:finalans)
    {
        cout << it.ff << endl;
        for(auto it2:it.ss)
        {
            cout << it2 << " ";
        }
        cout << endl;
    }



    

}

void prakhar()
{   
    
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
    for (int i = 0; i < t; i++)
    {
        input();
        algo();
    }
    
    return 0;
    
}
