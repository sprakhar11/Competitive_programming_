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
    string s = "";
    cin >> s;
    string t = "";
    cin >> t;
    int len = s .length();
    vector<int> v(26 , 0);
    for (int i = 0; i < len; i++)
    {
        v[ s[i] - 'a']++;
    }
    int ch1 = t[0] - 'a';
    int ch2 = t[1] - 'a';
    int ch3 = t[2] - 'a';
    // cout << t[2] << " " << t[1] << " " << t[0] << endl;
    // cout << ch1 << " " << ch2 << " " << ch3 << endl;
    string ans = "";
    if(v[0] == 0 || v[1] == 0 || v[2] == 0)
    {
        for (int i = 0; i < 26; i++)
        {
            if ( v[i] != 0)
            {
                for(int j = 0; j < v[i]; j++)
                {
                char ch = (char)(97+i);
                ans = ans + ch;
                }
            }
            
        }
        cout << ans << "\n";
        return;
        
    }
    
    int uni = 0;
    for (int i = 0; i < 26; i++)
    {
        if ( v[i] != 0 )
        {
            uni++;
        }
    }

    
        for (int i = 0; i < v[0]; i++)
        {
            ans = ans + "a";
            
        }
        v[0] = 0;
    
        
        if(ch2 == 1 && ch1 == 0)
        {
            for (int j = 0; j < v[2]; j++)
            {
                ans = ans +'c';
            }
            for (int j = 0; j < v[1]; j++)
            {
                ans = ans + 'b';
            }
            v[1] = 0;
            v[2] = 0;
            
            
        }
        if ( ch2 == 2 && ch1 == 0)
        {
            for (int j = 0; j < v[1]; j++)
            {
                ans = ans + 'b';
            }
            for (int j = 0; j < v[2]; j++)
            {
                ans = ans +'c';
            }
            v[1] = 0;
            v[2] = 0;
            
        }
        for (int i = 0; i < 26; i++)
        {
            if ( v[i] != 0)
            {
                for(int j = 0; j < v[i]; j++)
                {
                char ch = (char)(97+i);
                ans = ans + ch;
                }
            }
        }
        cout << ans << "\n";
        
        
    
    
    
    
    
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
