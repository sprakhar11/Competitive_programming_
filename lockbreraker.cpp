#include <bits/stdc++.h>
#define lli long long int
#define MOD 1000000007
using namespace std;
void vectorinput( vector<int> &v , int n )
{
    for (int i = 0; i < n; i++)
        {
            int x ;
            cin >> x;
            v.push_back(x);
            
        }
    
}
void factorss(vector<int> &v , int n )
{
    for (int i = 1; i <= n; i++)
    {
        if(n % i == 0){ v.push_back(i); }
    }
    
}
bool chkk(vector<int> &v , vector<int> &a , vector<int> &b)
{
    vector<int>k ;
    for (int i = 0; i < a.size(); i++)
    {
        k.push_back(a[i]);
    }
    for (int j = 0; j < b.size(); j++)
    {
        k.push_back(b[j]);
    }
    sort(k.begin(), k.end() , greater<int>() );
    sort(v.begin(), v.end() , greater<int>());
    if(k == v) return true;

    return false;
    
    
}

void solve()
{
    int n ; 
    cin >> n;
    vector<int> v ;
    vectorinput(v , n );
    sort(v.begin(), v.end() , greater<int>());
    for (int i = 0; i < n; i++)
    {
        vector<int> p ;
        factorss(p , v[i]);
        for (int j = i+1; j < n; j++)
        {
            
            vector<int> q ;
            factorss(p , v[i]);
            factorss(q, v[j]);
            if(chkk( v , p , q ))
            {
                cout << v[i] + v[j] << endl;
            }

            
        }
        
    }
    
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
    //cin >> t ;
    for (int i = 0; i < t; i++)
    {
        solve();
    }
    
    return 0;
    
}
