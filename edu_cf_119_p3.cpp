#include <bits/stdc++.h>
#define lli long long 
#define int long long 

using namespace std;
//prakhar_0007
const int MOD = 1e9 + 7;
lli mult(lli x, lli y) 
{
    lli res = x * y;
    return (res >= MOD ? res % MOD : res);
}
lli factorial(lli v)
{
    lli ans=1;
    for(int i=2;i<=v;i++)
    {
        ans*=i;
        ans%=MOD;
    }
    return ans;
}
lli power(lli x, lli y)
{   if (y < 0)
    return 1;
    lli res = 1; 
    x %= MOD;
    while (y!=0) 
    {
        if ((y & 1)==1)
        res = mult(res, x); 
        y >>= 1;
        x = mult(x, x);
    } 
    return res;
}
void vectorinput( vector<int> &v , int n )
{
    for (int i = 0; i < n; i++)
        {
            int x ;
            cin >> x;
            v.push_back(x);
            
        }
    
}
void printvec(vector<int> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " " ;
    }
    cout << endl;
}
void solve()
{
    int k  , n , x ;
    cin >> k >> n >> x;
    string s ;
    cin >> s ;
    int cnt = 0;
    vector<int> v;
    v.push_back(1e9);
    printvec(v);
    return;
    // int p =  0;
    // for (int i = 0; i < n; i++)
    // {
    //     if ( s[i] == 'a')
    //     {
    //         p = i ;
            
    //     }
    // }
    // cnt = n - p+1;
    // if ( x == 1)
    // {
    //     //actual print
    //     for (int i = 0; i < n; i++)
    //     {
            
    //     }
        
    // }
    // int c1 = cnt * k;
    // if ( x <= c1+1)
    // {

    // }
    // for (int i = p; i < n; i++)
    // {
    //     if ( s[i] == )
    // }
    
    
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
        solve();
    }
    
    return 0;
    
}
