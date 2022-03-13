#include <bits/stdc++.h>
#define lli long long int
#define MOD 1000000007
using namespace std;


void solve()
{
    int n ;
    cin >> n;
    vector<string> st;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        st.push_back(s);
    }
    for (int i = 0; i < n; i++)
    {
        int l = st[i].length();
        l -=2;
        cout << st[i][0] << l << st[i][l+1] << endl;
    }
    
    
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
    //cin >> t ;
    for (int i = 0; i < t; i++)
    {
        solve();
    }
    
    return 0;
    
}
