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
    int a ,b ;
    cin >> a>>b;
    int p  = max(a,b);
    int q =  min(a,b);
    lli maxx = LONG_MIN ; int f=0;int y=0;
    if( a ==b)
    {
        cout << "0\n" ; 
        return;
    }
    
    for (int i = q; i < q+2; i++)
    {
        lli ans = ceil( ((double)(b -i)/(double)2) ) + ceil ( ((double)(i - a)/(double)2) );
        //cout << (double)(i - a)/(double)2 << endl;
        f++;
        if(ans > maxx)
        {
         maxx = ans;
         y = f ;
        }
        if( p - q == 1 )
        {
            break ;
        }

    }

    cout << maxx << "  "<< y << endl;
    
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
