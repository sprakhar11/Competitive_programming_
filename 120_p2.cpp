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
    vector<pair<int, int>> p;
    for (int i = 0; i < n; i++)
    {
        int x ;
        cin >> x;
        p.push_back(make_pair(x,i));

    }
    string s = "";
    vector<pair<int, int> > p2 ;
    vector<pair<int, int> > p3 ;
    cin >> s; 
    for (int i = 0; i < n; i++)
    {
        if(s[i] == '0' )
        {
            p2.push_back(make_pair(p[i].first , p[i].second));
        }
        else
        {
            p3.push_back(make_pair(p[i].first , p[i].second));
        }
    }
    // printpair(p2);
    // cout << endl;
    // printpair(p3);
    // cout << endl;
    sort(p2.begin(), p2.end());
    sort(p3.begin(), p3.end());
    // printpair(p2);
    // cout << endl;
    // printpair(p3);
    int h = 1 ;
    for (int i = 0; i < p2.size(); i++)
    {
        p2[i].first = h++;
    }
    for (int i = 0; i < p3.size(); i++)
    {
        p3[i].first = h++;
    }
    sort(p2.begin(), p2.end(), pairsortsecond);
    sort(p3.begin(), p3.end(), pairsortsecond);
    // cout << endl;
    // printpair(p2);
    // cout << endl;
    // printpair(p3);
    // cout << endl;



    for (int i = 0; i < p3.size(); i++)
    {
        p2.push_back(make_pair(p3[i].first, p3[i].second));
    }
        sort(p2.begin(), p2.end(), pairsortsecond);
    printpair(p2);
    for (int i = 0; i < n; i++)
    {
        cout <<p2[i].first <<" ";
    }
    
    cout << "\n";
    


    
    



    
    
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
