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
    int n ;
    cin >> n;
    vector<int> v;
    vectorinput(v, n);
    if( n == 1){
        cout << v[0] << "\n";
        cout << v[0] << "\n";
        return;
    }
    vector<int> z;
    vector<int> o ;
    for (int i = 0; i < n; i++)
    {
        if(i % 2 == 0)
        {
            z.push_back(v[i]);
        }
        else
        {
            o.push_back(v[i]);
        }
    }
    sort(o.begin(), o.end() );
    sort(z.begin(), z.end(), greater<int>());
    lli sum = 0 ;
    for (int i = 0; i < n/2; i++)
    {
        for (int j = i; j < n/2; j++)
        {
            sum += z[i] * o[j] ; 
            //cout << sum << endl;
        }
        
    }
    for (int i = 0; i < n/2; i++)
    {
        
        
            cout << z[i] <<" ";
        
        
        
            cout << o[i] <<" ";
        
    }
    cout <<"\n" << sum << "\n";
    // printvec(z);
    // printvec(o);
    
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
