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
    string s;
    cin>>s;
    int cntl=0,cntu=0;
    for (int i = 0; i < s.length(); i++)
    {
        if((int)s[i]<=90)
        cntu++;
        else
        cntl++;
    }
    if(cntl<cntu)
    {
        std::for_each(s.begin(), s.end(), [](char & c){
        c = ::toupper(c);
        });
    }
    else
    {
        std::for_each(s.begin(), s.end(), [](char & c){
        c = ::tolower(c);
        });
    }
    cout<<s;
    
    return 0;
}
