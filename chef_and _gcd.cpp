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
    lli x,y;
        cin >> x >> y;
         if(((x%2!=0)&&(y%2==0))||((x%2==0)&&(y%2!=0)))
        {
            if(__gcd(x,y)>1)
            cout<<"0\n";
            else
            cout<<"1\n";
        }
       
       
        if((x%2!=0) && (y%2!=0))
        {
            if(__gcd(x,y)>1)
            cout<<"0\n";
            else if(__gcd(x,y+1)>1)
            cout<<"1\n";
            else if(__gcd(x+1,y)>1)
            cout<<"1\n";
             else if(__gcd(x+1,y+1)>1)
            cout<<"2\n";
        }
         if((x%2==0) && (y%2==0))
        cout<<"0\n";
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
