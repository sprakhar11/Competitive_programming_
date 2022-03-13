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
void solve()
{
    lli n ; 
    cin >> n;
    vector<lli> v ;
    // vectorinput( v , n );
    lli mn=1;
    map<lli ,lli > m ;
    
    
    
    for (int i = 0; i < n; i++)
    {
        lli x ;
        cin >> x;
        v.push_back(x);
        
        m[x] = m[x] + 1;
    }
    mn = v[0];
    for (int i = 1; i < n; i++)
    {
        mn &= v[i] ;
    }
    //cout << mn;
    if(m[mn]>=2)
    {
        int i = 0;
        for ( i = 0; i < n; i++)
        {
            if(v[i] & mn != mn)
            {
                break;
            }
        }
        if (i!=n)
        {
            cout << "0\n";
        }
        else
        {
            lli a = mult(m[mn] , m[mn]-1);
            lli b = factorial(n-2) ;
            lli ans = mult( a , b );
            cout << ans << "\n";
        }
    }
    else
    {
        cout << "0\n";
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
    cin >> t ;
    for (int i = 0; i < t; i++)
    {
        solve();
    }
    
    return 0;
    
}
