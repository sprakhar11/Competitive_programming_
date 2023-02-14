#include <bits/stdc++.h>
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
        int a,b,c;
        cin >> a>>b>>c;
        int k = 2 * ( 180 + a );
        cout << k - ( b + c)<< "\n";
    }
    return 0;
}
