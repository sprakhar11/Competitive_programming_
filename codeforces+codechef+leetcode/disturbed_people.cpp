#include <bits/stdc++.h>
#define lli long long int
#define mod 1000000007
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
void printvectors( vector<int> v )
{
    for (int i = 0; i < (int)v.size(); i++)
    {
        cout << v[i] << endl;
    }
}
void solve()
{
    int n ;
    cin >> n;
    vector<int> v;
    vectorinput(v, n);
    vector<int> pos;
    int ans = 0;
    for (int i = 1; i < n-1; i++)
    {
        if( v[i] == 0 && v[i+1] == 1 && v[i-1] == 1)
        {
            ans++;
            v[i+1] = 0 ;
        }
    }
    
    //calculation
    
    /* vector<int> posd;
    for (int i = 1; i < (int)pos.size(); i++)
    {
        posd.push_back(pos[i] - pos[i-1]);
    }
    printvectors(posd);
    for (int i = 1; i < (int)pos.size(); i++)
    {
        cout << pos[i] - pos[i-1] << " ";
        if(pos[i] - pos[i-1] == 2)
        {
            ans++;i++;
            cout << " in "  ; 
        }
        else
        ans++;
        //cout << pos[i] - pos[i-1] << " ";
    } */
    
    cout << ans << endl;

    

}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    lli t = 1 ;
    //cin >> t ;
    for (int i = 0; i < t; i++)
    {
        solve();
    }
    
    return 0;
    
}
