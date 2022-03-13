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
bool ispowerof2(int n)
{
   if(n==0)
   return false;
 
   return (ceil(log2(n)) == floor(log2(n)));
}
void solve()
{
    int n ; 
    cin >> n ;
    set<int> s ;
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= n; j++)
    //     {
    //         s.insert(i ^ j);
    //     }
        
    // }
    // set<int, greater<int> >::iterator itr;
    // for (itr = s.begin(); itr != s.end(); itr++) {
    //     cout << *itr << " ";
    // }
    // cout << "size = "<< s.size() << "\n" ;

    
    int f2 = 0;
    if ( n == 1)
    {
        cout << 1 << "\n";
        return;
    }
    if ( n==2)
    {
        cout << 2 << "\n";
        
        return;
    }
    if ( n == 3)
    {
        cout << 4 << "\n";
        return;

    }

    if(ispowerof2(n))
    {
        
        f2 = 1 ;
        // cout << "inside f "<< n << "\n";
        n++;
    }

    int lg = log2(n);
    lg++;
    // cout << lg << "\n";
    // cout << f2 << "\n";
    int ans = power(2 , lg);
    // cout << ans << "\n";
    if ( f2 == 1 )
    {
        ans-- ;
        cout <<  ans %MOD <<  "\n";
        return;
    }
    cout << ans % MOD <<"\n";
    

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
