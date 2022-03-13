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
    long int n, d,s=0;
    cin>>n>>d;
    int x;
    for(int i=0;i<n;i++)
    {
        cin>>x; 
        s+=x;
    }
    long int tot=s+(n-1)*10;
    if(tot>d)
    {
        cout<<"-1";
    }
    else
    {
        cout<<(d-s)/5;
    }

    return 0;
}
