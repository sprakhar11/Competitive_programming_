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
    int n,m;
    cin>>n>>m;
    int cnt=0;
    for (int i = n+1   ; i < 100; i++)
    {
        cnt=0;
        for (int j = 2; j < n+1; j++)
        {
            if(i%j==0)
            cnt++;
        }
        if(cnt==0)
        {
            if(i==m)
            cout<<"YES";
            else
            cout<<"NO";
            break;
        }
        
    }
    
    return 0;
}
