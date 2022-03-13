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
    cin>>s;
    if (s.length()==1)
    {
        cout<<s;
        return 0;
    }
    vector<int> a(s.length() / 2 + 1);
    int j=0;
    for (int i = 0; i <= s.length() / 2; i++ )
    {
        
        a[i]=(int)s[j]-48 ;
        j +=2;

    }
    
    
    sort(a.begin(), a.end());
    s="";
    for (int i = 0; i < a.size(); i++)
    {
        cout<<s;
        s=to_string(a[i])+"+";
    }
    s.erase(s.length()-1, 1);
    cout<<s;
    
    
    

    
    return 0;
}
