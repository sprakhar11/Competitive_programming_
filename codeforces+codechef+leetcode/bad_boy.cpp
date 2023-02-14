#include <bits/stdc++.h>
#define lli long long int
#define mod 1000000007
using namespace std;
//prakhar_0007
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    lli t=1;
    cin>>t;
    while (t--)
    {
        int n , m , i , j;
        cin >> n >> m >> i >> j;

        int k , l;
        k = n / 2;
        l = m / 2;
        if( n % 2 !=0) {k++;}
        if( m % 2 !=0) {l++;}
        if ( i > k )
        {
            
            i = n - i + 1 ;


        }
        if ( j > l )
        {
            
            i = n - i + 1 ;

            
        }
        cout << n << " " << j << " " << i << " " << m << endl;
    }
    return 0;
}
