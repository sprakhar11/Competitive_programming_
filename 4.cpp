#include <bits/stdc++.h>
#define lli long long int
#define mod 1000000007
using namespace std;
//prakhar_0007
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    lli t=1;
    cin>>t;
    while (t--)
    {
        int n , m ;
        cin >> n >> m;
        string arr[n];
        int p=0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            for(auto x:arr[i])
            p^=(x-'0');

        }
        if(p==0){
            cout << "NO\n";
        }
        else
        {
            cout << "YES\n";
        }
        
        
    }
    return 0;
}
