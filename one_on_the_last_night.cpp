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
void vectorinput( vector<int> &v , int n )
{
    for (int i = 0; i < n; i++)
        {
            int x ;
            cin >> x;
            v.push_back(x);
            
        }
    
}
void printvec(vector<lli> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " " ;
    }
    cout << endl;
}
bool chk(vector<lli> &v)
{
    
    
    int i = 0 ;
    while(i != v.size()){
        if ( v[i] != 9)
        {
            return false;
        }
        i++;
    }
    return true;
    

}
void solve()
{
    lli n , k ;
    cin >> n >> k;
    vector<lli> v;
    while(n !=0)
    {
        v.push_back(n%10);
        n /= 10;
    }
    sort ( v.begin(), v.end() );
    //printvec(v);
    // lli i = 0;
    // int sum = accumulate( v.begin(), v.end(), 0);
    // int avg = sum / v.size();
    // while( k != 0)
    // {
    //     if ( v[i] < avg ){
    //         if ( k > avg - v[i] )
    //         {
    //             int tmp = v[i];
    //             v[i] = avg ;
    //             k = k - ( avg - tmp );
    //         }
    //         else
    //         {
    //             k = 0;
    //             v[i] += k ;
    //         }
    //         i++;
    //     }
    //     else
    //     {
    //         break;
    //     }
    // }
    
    sort ( v.begin(), v.end() );
    while(k != 0){
        k--;
        sort ( v.begin(), v.end() );
        if ( v[0] != 9 )
        {
            v[0]++;
            
            
        }
        else
        {
            break;
        }
        
    }
    //printvec(v);
    lli mul = 1 ;
    for (int j = 0; j < v.size(); j++)
    {
        mul *= v[j];
    }
    cout << mul << "\n";
    
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
