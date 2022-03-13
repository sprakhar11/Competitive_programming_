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
        int ax, ay , bx , by , fx , fy ;
        cin >> ax >> ay >> bx >> by >> fx >> fy;
        
        if( ax == bx)
        {
            if( fx == ax && fy < max(ay , by ) && fy > min(  ay , by ))
            {
                cout << abs(ay - by) + 2 << "\n";

            }
            else
            {
                cout << abs(ay - by)<< "\n";
            }
            continue;
        }
        if( ay == by)
        {
            if( fy == ay && fx < max(ax ,bx ) && fx > min(ax ,bx  ))
            {
                cout << abs(ax - bx) + 2 << "\n";

            }
            else
            {
                cout << abs(ax - bx)<< "\n";
            }
            continue;
        }
        else
        {
            cout << abs(ay - by) + abs(ax - bx) << "\n";
        }
    }
    return 0;
    
}
