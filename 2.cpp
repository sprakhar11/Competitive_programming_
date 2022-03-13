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
    int n;
    cin >> n ;
    int r,g,y,b,o;
    int rr=0,gg=0,yy=0,bb=0,oo=0;
    
    cin >>r >>g >>y >>b >>o;
    string s[n];
    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
        if(s[i]=="red")
        rr++;
        if(s[i]=="orange")
        oo++;
        if(s[i]=="blue")
        bb++;
        if(s[i]=="green")
        gg++;
        if(s[i]=="yellow")
        yy++;

    }
    if(rr >= r && oo >= o && bb >= b && gg >= g && yy >= y)
    cout << "Yes";
    else
    cout << "No";



    
    return 0;
}
