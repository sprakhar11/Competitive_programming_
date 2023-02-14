#include <bits/stdc++.h>
#define lli long long int
#define MOD 1000000007
using namespace std;
#include <chrono>
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
void printvec(vector<lli> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " " ;
    }
    cout << endl;
}
lli digsum(lli n)
{
    if(n==0)return 0;
    return n%10 + digsum(n/10);
}
void solve()
{
    lli a, b, c;
    cin >> a >> b >> c ;
    vector<lli> v;
    //lli sum = 1;
    for (lli i = 1; i <= 81; i++)
    {
        
        
        lli p = (b * power(i , a)) + c;
        if ( i == digsum(p) && p > 0 && p <=1000000000)
        v.push_back(p);
    }
    cout << v.size() << endl;
    printvec(v);
    
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("error.txt", "w", stderr);
    #endif
    auto start = std::chrono::steady_clock::now();
    
    
    lli t = 1 ;
    //cin >> t ;
    for (int i = 0; i < t; i++)
    {
        solve();
    }
    auto end = std::chrono::steady_clock::now();
    std::chrono::duration<double> elapsed_seconds = end-start;
    //std::cout << "elapsed time: " << elapsed_seconds.count() << "s\n";
    return 0;
    
}
