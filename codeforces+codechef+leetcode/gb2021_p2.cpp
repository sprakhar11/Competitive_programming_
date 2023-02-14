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
void prakhar()
{
    int n ; 
    cin >> n;
    string s ;
    cin >> s;
    if(n==1)
    {
        cout << s << s << endl;
        return;
    }
    int k = 0 ;
    int p = 0 ;
    int q = 1 ;
    
    // cout << s[0];
    int i = 0;
    for ( i = 0; i < n-1; i++)
    {
        if(s[p] > s[q])
        {
            cout << s[p];
            p++;q++;
        }
        else
        {
            cout << s[p];
            k = p ;
            break ;
        }
    }
    if ( i == n-1)
    {
        if(k==0)
        {
            cout << s[n-1] ;
            k = n-1;
        }
    }
    if(s[p] != s[0])
    {
        for ( i = i  ; i < n -1; i++)
    {
        if(s[p] >= s[q])
        {
            cout << s[p];
            p++;q++;
        }
        else
        {
            // cout << s[p];
            k = p ;
            break ;
        }
    }
    }
    // cout << s[k+1];
    // if(i==n -1)
    // k--;
    // cout << s[p] << endl;
    if (s[p-1] == s[p] && i ==n-1)
    {
        // cout << "hi";
        cout << s[p] << s[p];
    }
    for (int j = k; j >= 0; j--)
    {
        cout << s[j] ;
    }
    cout <<"\n";
    

    
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
        prakhar();
    }
    
    return 0;
    
}
