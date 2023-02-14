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

int coinrow(vector<int> &v, vector<int> &p, int f)
{
    int n = v.size();
    // cout << n << endl;
    for (int i = 1; i < n; i++)
    {
        v[i] +=v[i-1];
    }
    for (int i = n-2; i >= 0; i--)
    {
        p[i] +=p[i+1];
    }

    int mx = 0;
    if(f==1)
    mx = LONG_MAX;
    
    int pos=  0;
    for (int i = 0; i < n; i++)
    {
        if(v[i] + p[i] > mx && f ==0) 
        {
            mx = v[i] + p[i];
            pos = i;
        }
        if(v[i] + p[i] < mx && f ==1) 
        {
            mx = v[i] + p[i];
            pos = i;
        }

    }
    if(f==0)
    return pos;

    return mx ;
    
}
void prakhar()
{
    // cout << "hello" ;
    int n ;
    cin >> n;
    // cout << "ih" ;
    vector<int> v;
    vector<int> p;
    int f =0 ;
    vectorinput(v , n);
    vectorinput(p , n);
    // printvec(v);
    // printvec(p);
    vector<int> h = v;
    vector<int> w = p;
    int pq = coinrow(v,p,f);
    // cout << pq << endl;
    // cout << "ch1\n";
    for (int i = 0; i < pq; i++)
    {
        h[i] =  0;
    }
    for (int i = pq; i < n; i++)
    {
       w[i] = 0; 
    }
    f = 1 ;
    int ans = coinrow(h, w,f);
    cout << ans << "\n";
}

int32_t main() {
    // cout << "hi ";
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("error.txt", "w", stderr);
    #endif
    int t = 1 ;
    cin >> t ;
    for (int i = 0; i < t; i++)
    {
        // cout << "helllloe" << "\n" ;
        prakhar();
    }
    
    return 0;
    
}
