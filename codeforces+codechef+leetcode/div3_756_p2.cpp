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
    lli a , b ;
    cin >> a >> b;
    lli p = (a+b)/4;
    lli res=min({a,b,p});
    cout<<res<<"\n";
    // lli cnt = 0 ;
    // int i , j ;
    // i = max ( a , b ) ;
    // j = min ( b , a ) ;
    // //cout << i << " " << j << endl;
    // while  ( i != 0  && j != 0 )
    // {
    //     //cout << "UP1 " << i << " " << j << endl;
    //     int p = j;
    //     int q = i;
        
    // i = max ( q , p) ;
    // j = min ( p , q ) ;
    //    // cout << "UP2 " << i << " " << j << endl;
    //     if ( i > 2 && j > 0)
    //    {
    //         cnt++ ;
    //         j-- ;
    //         i = i - 3;
    //         //cout << i << " " << j << endl;

    //     }
    //     else {
    //         break;
    //     }
    //     //cout << "DN " << i << " " << j << endl;
    // }
    
    //     if(i==2 && j == 2)
    //     cnt++;
    //     cout << cnt << "\n";
    
    
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
