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
        int n;
        cin >> n;
        vector<int> v(n,0);
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
        }
        int sum = 0;
        sum = accumulate(v.begin(),v.end(), sum);
        if (sum < 0)
        {
            cout << 1 << "\n";
        }
        else
        {
            if ( sum > n)
            {
                cout << sum - n << "\n"; 
            }
            else if(sum < n)
            {
                cout << 1 << "\n";
            }
            else
             cout << 0 << "\n";
        }
        
        

    }
    return 0;
}
