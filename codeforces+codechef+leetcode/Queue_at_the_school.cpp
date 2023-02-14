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
    string s="";
    
    int k,n;
    cin>>n>>k;
    cin>>s;
    while(k--)
    {
        for (int i = 1; i < n; i++)
        {
            if(s[i-1]=='B' && s[i]=='G')
            {
                char tmp=s[i-1];
                s[i-1]= s[i];
                s[i]=tmp;
                i++;
            }
        }
        
        
    }
    cout<<s;
    return 0;
}
