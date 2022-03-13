#include <bits/stdc++.h>
#define lli long long int
#define mod 1000000007
using namespace std;
void solve()
{
    lli n,a,b;
    cin>>n>>a>>b;
    string s;
    cin>>s;
    lli ans = a*n;
    if(b>0) ans+=b*n;
    else{
        int total=0;
        for(int i=1;i<n;i++){
            if(s[i]!=s[i-1]) total++;
        }
        total++;
        ans+=((total/2)+1)*b;
    }
    cout<<ans<<"\n";
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    lli t = 1 ;
    cin >> t ;
    for (int i = 0; i < t; i++)
    {
        solve();
    }
    
    return 0;
    
}
