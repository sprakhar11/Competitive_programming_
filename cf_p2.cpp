#include <bits/stdc++.h>
#define lli long long int
#define MOD 1000000007
using namespace std;
//prakhar_0007
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
    lli n ;
    cin >> n;
    // cout << n << "\n";
    string s = "";
    cin >> s ;
    
    if ( n == 3)
    {
        cout << "a" << s <<"\n";
        return;
    }
    
    string ans = "";
    ans = ans + s;
    int f = 0 ;
    for (int i = 1; i <= n-3; i++)
    {
        string p;
        cin >> p;
        // cout << p << endl;
        if (s[1] == p[0] )
        {
            ans = ans + p[1];
            // f =1 ;
        }
        else
        {
            ans  = ans + p ;
            // f = 0;
        }
        s = p ;

    }
    if ( ans.length() != n)
    {
        int p = n = n-ans.length() ;
        for (int i = 0; i < p; i++)
        {
            ans = ans + "a";
        }
        
    }
    cout << ans ;
    cout << "\n";

    
    


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
    cin >> t ;
    for (int i = 0; i < t; i++)
    {
        solve();
    }
    
    return 0;
    
}
