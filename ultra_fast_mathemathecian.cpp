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
    string a,b;
    cin>>a>>b;
    string ans="";
    lli l=a.length();
    for (int i = 0; i < l ; i++)
    {
        if((a[i]=='1' && b[i]=='0') || (a[i]=='0' && b[i]=='1'))
        ans=ans+'1';
        else
        ans=ans+'0';

        
    }
    cout<<ans;
    
    return 0;
}
