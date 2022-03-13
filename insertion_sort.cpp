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
bool chksort ( vector<int> &v)
{
    vector<int> p ;
    p = v ;
    sort(p.begin(), p.end());
    if ( p == v) return false;

    return true;
}
void newvector ( vector<int> &v , int  l , int r)
{
    int k  = r - l + 1;
    vector<int> h ;
    h.push_back(v[r]);

    for (int i = 0; i < k -1 ; i++)
    {
       h.push_back(v[i + l]);
    }
    //printvec(h);
    for (int i = 0; i < k; i++)
    {
        v[i+l] = h[i];
    }
    
    
}
void solve()
{
    int n ; 
    cin >> n;

    vector<int> v;
    vectorinput(v , n);

    for (int i = 0; i < n; i++)
    {
            for (int j = i + 1 ; j < n; j++)
            {
                if( v[i] > v[j] )
                {
                    int tmp = v[j] ;
                    for (int k = j; k > 0  ; k--)
                    {
                        v[k] = v [k - 1] ;
                    }
                    v[0]  = tmp ;
                    //printvec(v);
                    break;
                }
            }
            
    }
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " " ;
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
