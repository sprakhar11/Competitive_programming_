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
    double d=0.0;
    for (int i = 0; i < n; i++)
    {
        double t;
        cin>>t;
        
        d+=t/100;


    }
    double ans=(d/n)*100;
    cout<<ans;
    
    return 0;
}
