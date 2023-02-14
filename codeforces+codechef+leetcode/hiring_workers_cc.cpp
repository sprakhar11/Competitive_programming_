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
        int k , x ; 
        cin >> k >> x;
        lli sum = 0;int cnt = 0;
        for (int i = 2; i <= x ; i++)
        {
            if(x % i == 0)
            {
                sum = sum + i;
            }
        }
        cout << sum << "\n";
        
    }
    return 0;
}
