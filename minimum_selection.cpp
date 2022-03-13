#include <bits/stdc++.h>
#define lli long long int
#define mod 1000000007
using namespace std;
//prakhar_0007

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--){
     int n;
     cin >> n;
     vector <int> v;
     for (int i = 0; i < n; i++)
     {
        int x;
        cin >> x;
        v.push_back(x);
     }
    
    
        int sum = 0;
        sum = accumulate(v.begin(), v.end(), sum);
        if(sum % n ==0 )
        {
            int k = sum / n;
            int cnt=0;
            for (int i = 0; i < n; i++)
            {
                if ( v[i] > k)
                {
                    cnt++;
                }
                //cout << sum <<" ";
            }
            cout << cnt << endl;
            
        }
        else
        cout << -1 << endl;
    }
    
    return 0;
}
