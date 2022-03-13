#include <bits/stdc++.h>
#include <iomanip>
#define lli long long 
#define int long long 
// cout <<setprecision(15)
#define all(x) (x).begin(), (x).end()
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
    string a , b ;
    cin >> a >> b;
    int cntpa = count(all(a) , '+');
    int cntma = count(all(a) , '-');
    int cntpb = count(all(b) , '+');
    int cntmb = count(all(b) , '-');
    int q = b.length() - cntpb - cntmb ;
    
    if(cntpb > cntpa || cntmb > cntma )
    {
        cout << "0.000000000000";
    }
    else
    {
        int needp = cntpa - cntpb;
        int needm = cntma - cntmb;
        double ans = 0.0 ;
        if( needp == 0 || needm == 0 )
        {
            ans = (double)pow((double)2 , (double)q);
            ans = 1 / ans ;
            printf("%0.12f", ans); 
        }
        else
        {
            // cout << "hello \n" ;
            
            double ways = (double)factorial(needp + needm) / (factorial(needm) * factorial(needp));
            // cout << needm  << " " << needp <<endl;
            ans = ways / (double)pow((double)2 , (double)q);
            // cout << (double)pow((double)2 , (double)min(needp, needm)) ;
            // cout << q << endl;
            printf("%0.12f", ans); 

            
        }
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
        prakhar();
    }
    
    return 0;
    
}
