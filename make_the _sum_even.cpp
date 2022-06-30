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
    cin >> n;
    vector<lli> v ;
    vectorinput( v , n );
    lli sum = accumulate( v.begin(), v.end(), 0);
    if ( sum % 2 == 0 )
    {
        cout<< "0\n" ;
        return;
    }
    vector<lli> oddc;
    vector<lli> evenc;
    lli codd = 0;

    lli ceven = 0;
    for (lli i = 0; i < n; i++)
    {
        if( v[i] % 2 != 0 )
        {
            oddc.push_back(v[i]);
            codd++;
        }
        else
        {
            evenc.push_back(v[i]);
            ceven++;
        }
    }
    if ()
    

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
