#include <bits/stdc++.h>
#define lli long long 
#define int long long 

using namespace std;
//prakhar_0007
const int MOD = 1e9 + 7;
lli gcd(lli a, lli b) {if (b > a) {return gcd(b, a);} if (b == 0) {return a;} return gcd(b, a % b);}
lli mult(lli x, lli y) {lli res = x * y;return (res >= MOD ? res % MOD : res);}
lli factorial(lli v){lli ans=1;for(int i=2;i<=v;i++){ans*=i;ans%=MOD;}return ans;}
lli power(lli x, lli y){   if (y < 0)return 1;lli res = 1; x %= MOD;while (y!=0) {if ((y & 1)==1)res = mult(res, x); y >>= 1;x = mult(x, x);} return res;}
void vectorinput( vector<int> &v , int n ){for (int i = 0; i < n; i++){int x ;cin >> x;v.push_back(x);}}
void printvec(vector<int> &v){for (int i = 0; i < v.size(); i++){cout << v[i] << " " ;}cout << endl;}

void prakhar()
{
    map<int,int> m ;
    vector<int> vis(10005);
    vector<int> v(10005);
    int n  ;  
    cin >> n ;
    for (int i = 1; i <= n; i++)
    {
        vis[i] = 0;
        v[i] = 0  ;
    }
    for (int i = 1; i <= n; i++)
    {
        if(vis[i] == 0)
        {
            int last  = -1  ; 
            int cur = i;
            cout << "? " << i << endl;
            cin >> cur;
            while(vis[cur]==0)
            {
                vis[cur] = 1 ;
                last = cur ;
                cout << "? " << i <<endl;
                cin >> cur;
                m[last] = cur ;

            }
            v[i] = m[i];

        }
        else
        {
            v[i]=m[i];
        }
    }

    cout << "! ";
    for (int i = 1; i <= n; i++)
    {
        cout << v[i] << " ";
    }
    cout << "\n";
    cout.flush();
        
        
    

    
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
    cin >> t ;
    for (int i = 0; i < t; i++)
    {
        prakhar();
    }
    
    return 0;
    
}
