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

    getline(cin , s);int arr[26]={0};int dist=0;
    for (int i = 0; i < s.length(); i++)
    {
        if(s[i] >='a' && s[i] <='z')
        {
            arr[s[i]-'a']++;
        }
    }
    for (int i = 0; i < 26; i++)
    {
        if(arr[i]>0)
        dist++;
    }
    cout<< dist;
    
    
    return 0;
}
