#include <bits/stdc++.h>
#include <vector>
#define lli long long int
#define mod 1000000007
using namespace std;

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
        int n ;
        cin >> n;
        int v[2*n];
        for (int i = 0; i < 2*n; i++)
        {
            cin >> v[i];
        }
         int c1= 0;
         
         for (int i = 0; i < 2*n; i++)
         {
             if(v[i]%2==0)
             c1++;
         }
         if(c1==n)
         cout << "YES\n";
         else
         cout << "NO\n";
        
    }
    return 0;
    
}
