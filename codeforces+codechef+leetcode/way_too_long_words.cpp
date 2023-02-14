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
    cin >> n;
    
    while(n--)
    {string s = "";
    cin >> s;
    if(s.length()>10)
    {
        cout<<s[0]<<(s.length()-2)<<s[s.length()-1]<<endl;
    }
    else
    {
        cout<<s<<endl;
    }}
    return 0;
}
