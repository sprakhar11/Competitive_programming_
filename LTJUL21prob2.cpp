#include <bits/stdc++.h>
#define lli long long int
#define mod 1000000007
using namespace std;
void vectorinput( vector<lli> &v , lli n )
{
    for (lli i = 0; i < n; i++)
        {
            lli x ;
            cin >> x;
            v.push_back(x);
            
        }
    
}
void solve()
{
    lli n ;
    cin >> n ;
    vector<lli> a ;
    vector<lli> b ;
    //vector<lli> c ;
    vectorinput ( a , n);
    vectorinput ( b , n);
    lli tmp = ((a[0] + b[0]) % n);lli pos = 0; 
    //cout << tmp << endl;
    for (lli i = 1; i < n; i++)
    {
        if( ((a[0] + b[i]) % n) <= tmp )
        {
            pos = i ;
            tmp = ((a[0] + b[i]) % n) ;
        }
        //cout << ((a[0] + b[i]) % n) << endl;
    }
    //cout << pos << " " << endl;
    //pos--;
    for (lli i = 0; i < n; i++)
    {
        if(pos == n)
        {
            pos = 0;
        }
        //c.push_back((a[i] + b[pos]) % n);
        cout << ((a[i] + b[pos]) % n) << " " ;
        pos++;
    }
    cout << endl ;
    

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