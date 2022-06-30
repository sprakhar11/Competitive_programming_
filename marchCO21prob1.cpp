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
void solve()
{
    int k = 1;
    while( 1 ){
        cout << pow (k,2) << endl;
        int x ;
        cin >> x;
        k++;
        if ( x==1)
        break;
        
    }

    /* for (int i = 100; i <= 2100 ; i++)
    {
        cout <<  i <<  "\n" ;
        int x ;
        cin >> x;
        if(x==1)
        {
            break;
        }
    } */
    cout << flush;

    
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
