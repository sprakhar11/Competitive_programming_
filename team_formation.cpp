#include <bits/stdc++.h>
#define lli long long int
#define mod 1000000007
using namespace std;
void solve()
{
    lli n ;
    string s , t ;
    cin >> n >> s >> t;
    lli cnt = 0;
    lli zz=0 ;
    lli zo= 0 ;
    lli oz= 0 ;
    lli oo = 0 ;

    for (lli i = 0; i < n; i++)
    {   
        if(s[i] == '1' && t[i] == '1')
        oo++;
        else if(s[i] == '1' && t[i] == '0')
        oz++;
        else if (s[i] == '0' && t[i] == '1')
        zo++;
        else
        zz++;
    }
    
    if (oo >= zz )
    cnt += zz;
    if(oo <= zz  )
    cnt += oo;
    //if(oz !=0 && zo != 0)
    cnt += min(oz, zo);
    
    //if(oz !=0 && zo != 0 && zz !=0 && oo !=0 && zz !=0)
    if ( oo-zz > 0 ){
    cnt += min( abs(oz-zo) , oo-zz );

    
    if((oo-zz - abs(oz-zo) ) > 0)
    cnt += (oo-zz - abs(oz-zo) ) / 2 ;

    }
    cout << cnt << endl;
    
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("error.txt", "w", stderr);
    #endif
    lli t = 1 ;
    cin >> t ;
    for (lli i = 0; i < t; i++)
    {
        solve();
    }
    
    return 0;
    
}
