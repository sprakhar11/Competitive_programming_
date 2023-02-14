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
    string s;
    cin>>n>>s;
    int cnt=0;;
    for (int i = 1; i < s.length(); i++)
    {
        if(s[i-1]==s[i])
        {
            cnt++;
            s.erase(i,1);
            i--;
        }

    }
    cout<<cnt;
    
    return 0;
}
