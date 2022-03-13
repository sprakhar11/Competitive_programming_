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
    cin >> s;
    sort(s.begin(), s.end());
    int cnt=0;
    for (int i = 0; i < s.length()-1; i++)
    {
        if(s[i]!=s[i+1])
        cnt++;
    }
    if(((cnt+1) % 2) == 0)
    cout<<"CHAT WITH HER!";
    else
    cout<<"IGNORE HIM!";

    return 0;
}