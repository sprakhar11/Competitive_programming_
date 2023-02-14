#include <bits/stdc++.h>
#define lli long long int
#define mod 1000000007
using namespace std;
// prakhar_0007
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
   
    lli t = 1;
    cin >> t;
    while (t--) {
        int  a,b,c,d;
        cin >> a >> b>>c>>d;
        if( a+c == 180 && b+d== 180)
        cout << "YES\n";
        cout << "NO\n";
    }
    return 0;
}
