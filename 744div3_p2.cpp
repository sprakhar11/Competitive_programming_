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
int chksort ( vector<int> &v)
{
    vector<int> p ;
    p = v ;
    sort(p.begin(), p.end());
    for (int i = 0; i < v.size(); i++)
    {
        if( v[i] != p[i])
        {
            return 1 ;
        }
    }

    return 0 ;
    
}
void newvector ( vector<int> &v , int  l , int r)
{
    int k  = r - l + 1;
    vector<int> h ;
    h.push_back(v[r]);

    for (int i = 0; i < k -1 ; i++)
    {
       h.push_back(v[i + l]);
    }
    //printvec(h);
    for (int i = 0; i < k; i++)
    {
        v[i+l] = h[i];
    }
    
    
}
void solve()
{
    int n ;
    cin >> n;
    vector<int> v;
    vectorinput(v , n);
    vector<pair<int, int>> vp;
    int k = 0;
    //cout  << chksort(v) << endl;
    //cout << "ff" << f << endl;
    //cout << chksort(v) << endl;
    
    while(chksort(v) == 1){

        //int p1 = 0 ;
        
        int f= 0 ; 
        cout << " chk 1 " << endl;
        for (int i = 0; i < n; i++)
        {
            cout << "chk 2" << endl;
            for (int j = n-1; j >=0 ; j--)
            {
                cout << "chk 3" << endl;
                //cout << "ff" << f << endl;
                if( i > j ){
                    f = 1 ;
                    cout << "chk 4" << endl;
                    break ;
                }
                if ( v[j] <= v[i])
                {
                    cout << "chk 5" << endl;
                    vp.push_back(make_pair(i, j));
                    newvector(v , i , j);
                    printvec(v);
                    k++;
                    f = 1;
                    //cout << "ff" << f << endl;
                    //break;
                }
                cout << " chk 6" << endl;
                if (f==1) break;
                cout << " chk 7 " << endl;
            }
            //cout << "ff" << f << endl;
            cout << " 888888" << endl;

            cout << chksort(v) << endl;
            if (f==1) break;
            
        }
        //cout << "hi" << endl;
    }
    cout << k << endl;

}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // freopen("error.txt", "w", stderr);
    // #endif

    lli t = 1 ;
    cin >> t ;
    for (int i = 0; i < t; i++)
    {
        solve();
    }
    
    return 0;
    
}
