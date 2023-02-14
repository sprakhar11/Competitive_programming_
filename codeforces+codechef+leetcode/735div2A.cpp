#include <bits/stdc++.h>
#define lli long long int
#define mod 1000000007
using namespace std;
void vectorinput( vector<lli> &v , lli n )
{
    for (lli i = 0; i < n; i++)
        {
            int x ;
            cin >> x;
            v.push_back(x);
            
        }
    
}
void solve()
{
    lli n ;
    cin >> n;
    //cout << n ;
    vector<lli> v;
    vectorinput(v , n);
    //vector<lli> vt; 
    lli maxx = 0;
    if ( n == 2)
    {
        cout << v[0] *v[1] << endl; 
        return ;
    }
    for (lli i = 0; i < n -1; i++)
    {
        lli p = v[i] * v [i+1];
        if ( p > maxx)
        {
            maxx = p;
        }
    }
    cout << maxx << endl;
    

    
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
        //cout << t ; 
        solve();
    }
    
    return 0;
    
}
