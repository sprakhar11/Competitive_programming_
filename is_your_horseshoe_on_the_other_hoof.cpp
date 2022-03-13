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
    
    vector<int> vt(4);
    for(int &x:vt)
    cin>>x;
    int cnt=0;
    sort(vt.begin(), vt.end());
    for (int i = 0; i < 3; i++)
    {
        if(vt[i+1]==vt[i])
        cnt++;
    }
    cout<<cnt;
    

    return 0;
}
