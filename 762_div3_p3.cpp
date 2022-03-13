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
    for (int i = 0; i < (int)v.size(); i++)
    {
        cout << v[i] << " " ;
    }
    cout << endl;
}
void numtovec( vector<int> &v, int n )
{
    while( n!=0 )
    {
        v.push_back( n % 10);
        n /=10;
    }
}
void solve()
{
    int a , s ;
    cin >> a >> s ;
    vector<int> v;
    vector<int> p ;
    numtovec(v , a);
    numtovec(p , s);
    reverse(v.begin(), v.end());
    reverse(p.begin(), p.end());
    // printvec(v);
    // printvec(p);
    int i = v.size() - 1;
    int j = p.size() - 1;
    string ans = "";
    int f = 1;
    int f1 = 1 ;
    while(true)
    {

        if( p[j] < v[i] )
        {
            if(j == 0)
            {
                f = -1;
                break;
            }
            if (p[j-1] == 1)
            {
                int k = p[j-1] * 10 + p[j];
                int g = k - v[i];
                // cout << "g" << " " << g << endl;
                string ch = to_string(g);
                ans = ch + ans ;
                j -=2;
                i--;
                
            }
            else
            {
                f1 = -1;
                f=-1;
                break;
            }
        }
        else if ( p[j] > v[i])
        {
            int k = p[j] - v[i];
            j--; i--;
            string ch = to_string(k);
            // cout << "ch " << ch << endl;
            ans = ch + ans ;
        }
        else
        {
            ans = '0' + ans ;
            i--;
            j--;
        }
        if(j==-1 || i==-1 )
        {
            // if(j == -1 && i !=-1)
            // f=-1;
            break;
        }
    }

    
    if ( j == -1 && i !=-1)
    {
        f=-1;
    }
    if( i == -1 && j !=-1 && f1 == 1)
    {
        string ch = to_string(s).substr(0,j+1);
        ans = ch + ans;
        cout << stoi(ans) << "\n";
        return;


    }
    if(f1 == -1 )
    {
        cout << -1 << "\n";
        return;
    }
    
    if( f == 1 )
    cout << stoi(ans) << "\n";
    else
    {
        cout << -1 << "\n";
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
    cin >> t ;
    for (int i = 0; i < t; i++)
    {
        solve();
    }
    
    return 0;
    
}
