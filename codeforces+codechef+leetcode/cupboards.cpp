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
    int n=0;
    cin>>n;
    int c1=0,c2=0,c3=0,c4=0;
    for (int i = 0; i < n; i++)
    {
        int a,b;
        cin>>a>>b;
        if(a==0)
        c1++;
        else
        c2++;
        if(b==0)
        c3++;
        else
        c4++;
    }
    cout<<min(c1,c2)+min(c3,c4);
    
    return 0;
}
