#include <bits/stdc++.h>
#define ll long long int
#define MOD 1000000007
using namespace std;
ll mult(ll x, ll y) 
{
    ll res = x * y;
    return (res >= MOD ? res % MOD : res);
}
ll factorial(ll v)
{
    ll ans=1;
    for(int i=2;i<=v;i++)
    {
        ans*=i;
        ans%=MOD;
    }
    return ans;
}
ll power(ll x, ll y)
{   if (y < 0)
    return 1;
    ll res = 1; 
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
    int n,p , x , y ;
    cin >> n >> p >> x >> y;
    vector<int> v;
    v.push_back(0);
    vectorinput( v , n);
    ll time = 0;
    for (int i = 1; i <= n; i++)
    {
        if( i == p)
        {
            if(v[i] == 0)
            {
                time +=x;
            }
            else
            time +=y;
            break;
        }
        else
        {
            if(v[i] == 0)
            {
                time +=x;
            }
            else
            time +=y;
        }
    }
    cout << time << endl;
    
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("error.txt", "w", stderr);
    #endif
    ll t = 1 ;
    cin >> t ;
    for (int i = 0; i < t; i++)
    {
        solve();
    }
    
    return 0;
    
}
