#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <bits/stdc++.h>
#include <vector>
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
    cin>>n;
    int a,b,maxx=0;
    cin>>a>>b;
    int tmp=b;
    maxx=b;
    cin>>a>>b;
    int tmp2=0;
    for (int i = 2; i < n; i++)
    {
        if((tmp2+tmp-a+b)>maxx)
        {
            maxx=tmp2+tmp-a+b;
        }
        tmp2=tmp2+tmp-a+b;
        cin>>a>>b;
        tmp=0;

    }
    cout<<maxx;
    
    return 0;
}
