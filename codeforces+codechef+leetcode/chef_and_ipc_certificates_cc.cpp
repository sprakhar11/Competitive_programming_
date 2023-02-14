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
    int n , m , k , cnt = 0;
    cin >> n >> m >> k;
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = 0; j < k; j++)
        {
            int t;
            cin >> t;
            sum +=t;


        }
        int q = 0;
        cin >> q;
        if ( q <= 10 && sum >= m )
        {
            cnt++;
        }
        
    }
    cout << cnt;
    
    return 0;
}
