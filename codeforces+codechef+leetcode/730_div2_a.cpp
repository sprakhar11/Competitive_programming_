#include <bits/stdc++.h>
#define lli long long int
#define mod 1000000007
using namespace std;

/* long gcd(lli x, lli y){
    if( x==0 || y == 0 ){
        return (x==0) ? y : x ;
    }
    lli a, b, r;
    if(x > y){
        a = x;
        b = y;
    }
    else{
        a = y;
        b = x;
    }
    while(b != 0){
        r = a % b;
        a = b;
        b = r;
    }
    return a;
} */

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif
    /* lli t = 1;
    cin >> t;
    while (t--) {
        lli x , y;
        cin >> x >> y;
        lli arr[x]; 
        for (int i = 0; i < 10; i++)
        {
            cout << __gcd(x, y) << endl;
            x--; y--;
        }
        cout << "nextttt" << endl;

        
        */ 
    //}
    cout << __gcd(4, 8) << endl;
    return 0;
    
}
