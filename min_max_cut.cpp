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
    string s ;
    cin >> s;
    char p = s[0];
    vector<int> v;
    vector<int> v2;
    for (int i = 0; i < s.length(); i++)
    {
        v.push_back(s[i] - '0');
    }
    int z =0 ;
    vector<int>::iterator ip;
    ip = std::unique(v.begin(), v.end());
    v.resize(std::distance(v.begin(), ip));
    for (ip = v.begin(); ip != v.end(); ++ip) {
        v2.push_back(*ip);
        if(*ip == 0)
        {
            z++;
        }
    }

    int  l = s.length();
    int sum = 0;
    int zzero  = 0;
    for (int i = 0; i < l; i++)
    {
        sum +=s[i] - '0' ;
        if ( s[i] == '0')
        zzero++ ;
    }
    if ( sum == l )
    {
        cout << 0 << endl;
    }
    else if ( sum == 0 )
    {
        cout << 1 << endl;
    }
    else
    {
        cout << min( z, 2 ) << endl;
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
