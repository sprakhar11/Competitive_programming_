#include <bits/stdc++.h>
#define lli long long int
#define mod 1000000007
using namespace std;

int main() {
    
    lli t = 1;
    int area ; 
    int trianglebase;
    cin >> trianglebase >> area ; 
    int ans = (int)( area * 2 ) / (int)trianglebase;
    double ans2 = (double)( area * 2 ) / (double)trianglebase;
    //if ( ans2 - ans != 0)
    {
        cout << ans+1 ;
    }
    //else
     {
    cout << ans2;
    }
    
    //cout << ans2;
}
