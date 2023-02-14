#include <bits/stdc++.h>
#define lli long long int
#define mod 1000000007
using namespace std;
// prakhar_0007
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    lli t = 1;
    cin >> t;
    while (t--) {
        int n , x , t;
        cin >> n >> x >> t;
        vector<int> f(n);
        vector<int> s(n);
        
        lli sum = 0; int k = 0;
        for (int i = 0; i < n; i++)
        {
            f[i] = t +  k * x;
            s[i] = k * x;
            cout << k * x << " " << f[i] << " " << i << endl;
            k++;
        }
        for (int j = 0; j < n; j++)
        {
            
        }
        
        

    }
    return 0;
}
