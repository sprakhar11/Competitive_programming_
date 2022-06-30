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
    int n , m , l;
    cin  >> n >> m >> l ;
    vector<int> v(n , -1);
    for (int i = 0; i < m; i++)
    {
        int k ;
        cin >> k;
        for(int j = 0; j < k ; j++)
        {
            int x; 
            cin >> x;
            v[x] = i;

        }
    }
    vector<int> list;
    vectorinput(list , l);
    if(n==1 || l==1){
        cout << "1\n";
        return;
    }
    vector<int> ans;
    
    for (int i = 0; i < l; i++)
    {
        ans.push_back(v[list[i]]);
    }
    
    /* for (int i = 0; i < (int)ans.size(); i++)
    {
        cout << ans[i] <<endl;
    } */
    
    // count the groups in ans;
    int cnt = 0 ;
    vector<int>::iterator ip;
    ip = unique(ans.begin(), ans.end());
    ans.resize(distance(ans.begin(), ip));
    for (ip = ans.begin(); ip != ans.end(); ++ip) {
        cnt++;
    }
    cout << cnt << endl;
    
    

    
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
