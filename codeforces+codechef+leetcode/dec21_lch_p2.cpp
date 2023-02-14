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
void vectorinput( vector<lli> &v , int n )
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
    int n ;
    cin >> n;
    
    map<lli , lli> mp ;
    vector<lli> v ;
    vectorinput(v, n);
    if ( n == 1 ){
        cout << 0 << "\n";
        return;
    }
    for(int i = 0 ; i < n ; i++)
    {
        mp[v[i]]++;
    }
    int cnt1 = 0 ; int cnt2 = 0;
    int mx = 0;
    for(auto& it : mp)
    {
        cnt1++;
        //cout << it.first << " " << it.second << endl;      
        if ( it.second == 1 )
        {
            cnt2++;
        }
        if ( it.second > mx)
        mx=it.second;
    }
    if (mx == n)
    {
        cout << 0 << "\n";
        return;
    }
    if(cnt1 == cnt2){
        cout << -1 << "\n";
    }
    else{

        double par = mx / 2 ;
        // if (par == 1)
        // {
        //     int ans = n - 1 ;
        //     if ( mx == 3 )
        //     cout << ans  << "\n";
        //     else
        //     cout << ans << "\n";
        // }
        // else
        int d = mx / 2;
        double df = par - d ;
        if ( df == 0.0d )
        {
            int ans = n - mx +1  ;
            // cout << mx << "\n";
            // if ( par * 2 == mx )
            // cout << ans << "\n";
            // else 
            cout << ans  << "\n";
        }
        else
        {
            int ans = n - mx +1;
            cout << ans  << "\n";
        }


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
