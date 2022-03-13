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
    vector<int> v;
    vectorinput(v, n);
    vector<int> pos(101 , 0) ;
    vector<int> ng(101 , 0);
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if(v[i] >= 0)
        {
            pos[v[i]]++ ;
            
        }
        else
        {
            ng[-1 * v[i]]++;
        }
    }
    
    for (int i = 0; i < pos.size(); i++)
    {
        if(pos[i] !=0)
        {
            cnt++;
        }
        if ( pos[i] >1 && ng[i]==0 && i!=0 )
        {
            cnt++;
        }
    }
    for (int i = 0; i < ng.size(); i++)
    {
        if ( ng[i] >1 && pos[i]==0 && i!=0 )
        {
            cnt++;
        }
        if(ng[i] !=0 )
        {
            cnt++;
        }
    }
    cout << cnt << "\n";
    
    
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
