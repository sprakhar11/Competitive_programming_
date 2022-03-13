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
void printpair(vector<pair<int, int>> &p)
{
    for (int i = 0; i < p.size(); i++)
    {
        cout << p[i].first << " " << p[i].second << endl;/* code */
    }
    
}
bool pairsortsecond(const pair<int,int> &a,
              const pair<int,int> &b)
{
    return (a.second < b.second);
}
void solve()
{
    int n ;
    cin >> n;
    vector<int> v;
    vectorinput(v , n );
    vector<int> v2 = v;
    sort(v.begin(), v.end());
    // printvec(v);
    int i =  0;
    int j = 0;
    int mxloc = n-1 ;
    int mxx = 0 ;
    int p = n ;
    int cost = 0;
    int min2 = 0 ;
    int m2 = 0;
    while (v2!=v)
    {
        mxx =0 ;
        for (int i = 0; i < p; i++)
        {
            if ( v2[i] >= mxx)
            {
                mxx = v2[i];
                mxloc = i;
            }
        }

        m2 = *max_element(v2.begin() + mxloc, v2.begin() + p);
        min2 = *min_element(v2.begin() + mxloc, v2.begin() + p);
        sort(v2.begin() + mxloc, v2.end());
        cost += m2 - min2;
        p = mxloc;
    }
    cout << cost << "\n";
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
