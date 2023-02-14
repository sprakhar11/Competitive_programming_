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
    int ar[n];
    for(auto &x:ar)
    cin>>x;
    if(n==1)
    {
        cout<<0;
        return 0;
    }
    int mins=ar[0];
    int maxs=ar[0];int cnt=0;
    for (int i = 1; i < n; i++)
    {
        if(ar[i]>maxs)
        {cnt++;
        maxs=ar[i];
        }
        if(ar[i]<mins)
        {
            cnt++;
            mins=ar[i];
        }
    }
    cout<<cnt;
    
    return 0;
}
