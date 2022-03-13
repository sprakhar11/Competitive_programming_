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
    int n , k ;
    cin >> n >> k;
    string s ;
    cin >> s;
    string s3 = s.substr( k , n );
    string news = "";
    int i =  k / 2;
    int j = i - 1 ;
    if(k % 2 == 0){
        i =  k / 2;
     j = i - 1 ;
    for (int p = 0; p < k; p++)
    {
        if (p%2 == 0)
        {
            cout << s[i]; i++;
        }
        else
        {
            cout << s[j];
            j--;
        }
        // cout << "hi "<< "\n";
    }
    }
    else
    {
        i =  k / 2;
         j = i + 1 ;
        for (int p = 0; p < k; p++)
    {
        if (p%2 == 0)
        {
            cout << s[i]; i--;
        }
        else
        {
            cout << s[j];
            j++;
        }
        // cout << "hi "<< "\n";
    }
    }
    cout << s3 << "\n";
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
