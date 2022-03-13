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
    int n , m ;
    cin >> n >> m;
    int j = 1;
    int i = 0;
    int line =1 ;
    while ( true)
    {
        if ( n >= j && n <= j+i)
        {
            break;
        }
        line++;
        i++;
        j += i;
    }    
    int posn = n - j + 1 ;
    int linen = line ;
    j = 1;
    i = 0;
    line = 1 ;
    while ( true)
    {
        if ( m >= j && m <= j+i)
        {
            break;
        }
        line++;
        i++;
        j += i;
    }    
    int linem = line ;
    int posm = m - j + 1;
    int last = j + i ;

    // cout << n << " " << posn << " " << linen << "\n";
    // cout << m << " " << posm << " " << linem << "\n";

    int difl = linem - linen;
    if ( n >= m)
    {
        cout << 0 << "\n";
        return;
    }
    
    if ( posm >= posn && posm <= (posn + difl) && difl > 0)
    {
        // cout << posn << " " << difl << " " << posm << "\n";
        int side1 = posn + difl - posm ;
        int side2 = posm - posn;
        // cout << side1 << " " << side2 << "\n";
        // if ( side1 == 0 || side2 == 0)
        // {
        //     cout << 1 << "\n";
        //     return;
        // }
        // cout << side1 << ' ' << side2 << '\n';
        lli f = factorial(side1 + side2);
        lli p = (power( factorial(side1) , MOD - 2)) % MOD;
        lli q = (power( factorial(side2) , MOD - 2)) % MOD;
        lli ans = mult(mult(f, p), q);
        cout << ans << "\n";
    }    
    else 
    {
        cout << 0 << "\n";
    }

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
