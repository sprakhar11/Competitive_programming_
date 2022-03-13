#include <bits/stdc++.h>
#define lli long long int
#define mod 1000000007
using namespace std;
bool recursv(lli x , lli n , lli a ,lli b)
{
    if(x== n)
    {
        return true;
    }
    if( x > n )
    {
        return false;
    }
    if(x > 1000000001)
    {
        return false;
    }
    recursv( a * x , n , a , b);
    recursv( b + x , n , a , b);
    return false;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    /* #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif */
    lli t = 1;
    cin >> t;
    while (t--) {
        lli n ,a , b;
        cin >> n >>a >>b;
        if(recursv(1, n , a ,b))
        cout << "YES\n";
        else
        cout << "NO\n";
        /* vector<lli> v;
        lli k =1;
        for(lli i=0 ; i < mod ; i++){


        } */
    }
    return 0;
    
}
