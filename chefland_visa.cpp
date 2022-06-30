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
    
    lli t;
    cin>>t;
    while (t--)
    {
       int x1,x2,y1,y2,z1,z2;
       cin >>x1>>x2>>y1>>y2>>z1>>z2;
        if ((x2>=x1) && (y2>=y1) && (z2<=z1))
        {
            cout << "YES" << "\n";
        }
        else
        cout << "NO" << "\n";
        
    }
    return 0;
}
