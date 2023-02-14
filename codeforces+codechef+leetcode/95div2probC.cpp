#include <bits/stdc++.h>
#define lli long long int
#define MOD 1000000007
using namespace std;
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
lli comb(lli n, lli k)
{
    lli res = 1;
    if (k > n - k)
        k = n - k;
    for (int i = 0; i < k; ++i) {
        res *= (n - i);
        res /= (i + 1);
    }
    return res;
}
void solve()
{
    lli n , m , t ;
    cin >> n >> m >> t;
    if(n+m==t)
    cout << 1;
    else if (n ==4)
    {
        lli ans = comb(m , t-4);
        cout << ans;
    }
    else if (m==1)
    {
        lli ans = comb(n , t-1);
        cout << ans;
    }
    else
    {
        lli ans = 0;
        lli l = t -4 ;
        lli p = 4; lli q = t-4;
        
        for (int i = 0; i < l; i++)
        {
            if(n >=p && m >=q)
            ans += comb(n , p) * comb ( m , q);
            //cout << ans << endl;
            p++; q--;
            
        }
        
        cout << 5% 6 << endl;
        cout << ans;
    }


}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("error.txt", "w", stderr);
    #endif
    lli t = 1 ;
    //cin >> t ;
    for (int i = 0; i < t; i++)
    {
        solve();
    }
    
    return 0;
    
}
