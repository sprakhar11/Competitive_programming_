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
    int n,f=0;
    cin>>n;
    vector<int> v;
    vectorinput(v , n);
    
    for(int i=0;i<n-1;i++)
    { 
        int p=abs(v[i+1]-v[i]);
        if((p!=1) && (p!=n-1))
        { f=1;
            cout<<"NO\n";
            break;
        }
    }
    if(f==0)
    cout<<"YES\n";
	
    
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
