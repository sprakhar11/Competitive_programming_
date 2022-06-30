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
   int n , k;
   cin >> n >> k;
   vector<int> v;
   vectorinput(v , n );
   
   vector <int> positive ; 
   vector <int> negative;
   vector <int> zero;
   for (int i = 0; i < n; i++)
   {
       if(v[i] == 0)
       zero.push_back(0);
       else if(v[i] > 0 )
       positive.push_back(v[i]);
       else
       negative.push_back(v[i] * (-1));

   }
    sort(negative.begin(), negative.end() , greater<int>());
   ll sum = 0;
   
   sum = accumulate(positive.begin(), positive.end(), sum);
   //cout << sum << endl;
   if ( k != 0  )
   {
       
       for (int p = 0; p < k; p++)
       {
           if(negative.size() > p)
           //cout << sum << endl;
           sum += negative[p];
           
       }
       
   }
   
   cout << sum << endl;

   
   
   
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
