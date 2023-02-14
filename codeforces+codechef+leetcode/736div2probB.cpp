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
    int n ; 
    cin >> n;
    string a ;
    string b ;
    cin >>  a >> b;
    vector<bool> ans(n , false);
    for (int i = 0; i < n; i++)
    {
        if(b[i]=='1')
        {
            if( a[i] == '0')
            {
                ans[i]= true ;
                continue ;
            }
             if( i !=0)
            {
                if(ans[i-1]== false && a[i-1] == '1')
                {
                    ans[i-1]= true;
                    continue ;
                }
            }
            if ( i != n-1)
            {
                if(ans[i+1] == false && a[i+1] == '1')
                {
                   // cout << "i";
                    ans[i+1]= true;
                    continue ;
                }
            }
            
        }
    }
    cout << count(ans.begin(), ans.end(), true) << endl;
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
