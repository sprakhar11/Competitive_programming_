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
    int n ; 
    cin >> n ;
    vector<int> v(n , 0);
    int j = 1 ;
    for (int i = 0; i < n; i++)
    {
        v[i] = power(3, n - j);
        j++;
    }
    printvec(v);
    string num = "";
    vector<string> nadd(n , "0");
    // cout << power(3, n) << endl;
    int p = n -1 ;
    for (int i = 1; i <= power(3 , n); i++)
    {
        num = "";   
        // cout << " hi" << endl;
        p = n -1 ;
        for (int k = 0; k < n; k++)
        {
            if( i % v[p] == 0)
            {
                nadd[n - k - 1] = "0";
            }
            if( i % v[p] == 1)
            {
                nadd[n - k - 1] = "1";
            }
            if( i % v[p] == 2)
            {
                nadd[n - k - 1] = "2";
            }
            p--;
        }
        for (int k = 0; k < n; k++)
        {
            cout << nadd[k] ;
        }
        cout << endl;
        
        
        // for (int k = 0; k < n; k++)
        // {
        //     if ()
        // }

        
    }
    
    
    

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
    // cin >> t ;
    for (int i = 0; i < t; i++)
    {
        solve();
    }
    
    return 0;
    
}
