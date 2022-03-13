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
    string s="",ns="";
    cin>>s;
    int l=s.length();
    for (int i = 0; i < l; i++)
    {
        if(s[i]=='.')
        {
            ns=ns+"0";
            continue;
        }
        if((s.substr(i,2)).compare("-."))
        {
            ns=ns+"2";
            i++;
            continue;
        }
        if((s.substr(i,2)).compare("--"))
        {
            ns=ns+"1";
            i++;
            continue;
        }
    }
    cout<<ns;
    
    return 0;
}
