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
    lli x ;
    cin >> x ;
    lli p = 0;
    lli i = 0;
    
    while (true)
    {
        p = pow(2 ,i);
        if(x==0)
        {
            cout << "1\n";
            break ;
        }
        if(x==1)
        {
            cout << "2\n";
            break ;
        }
        if ( p == x)
        {
            cout << p <<endl;
            break ;
        }
        if( p-1 ==x)
        {
            cout << p <<endl;
            break ;
        }
        if ( p > x)
        {
            lli aa = pow(2,i-1);
            cout << aa  <<endl;
            break ;
        }
        i++;
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
