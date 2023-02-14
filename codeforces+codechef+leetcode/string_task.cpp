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
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    
    string tmp="";
    for (int i = 0; i < s.length(); i++)
    {
        
        if( s[i]=='a' ||  s[i]=='e' ||  s[i]=='i' ||  s[i]=='o' ||  s[i]=='u' ||  s[i]=='y')
        {
            

        }
        else
        {
            cout << "."  << s[i] ;
        }
        
    }
    cout << tmp;
    return 0;
}
