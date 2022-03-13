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
    int k=0;
    int l=s.size();
    for (int i = 0; i < l-k; i++)
    {   
        k=0;
        int f= s.find("WUB");
       if ( f !=-1 )
       {
        s = s.erase(f,3);
        s = s.insert( f ," ");
        k=2;
         
       }
    }
    for (int i = 0; i < s.size(); i++)
    {
        if(s[i]==' ')
        {
            s.erase(i ,1);
            i--;
        }
        else
        break;
    }
    for (int i = s.size() - 1 ; i > 0; i--)
    {
        if(s[i]==' ')
        {
            s.erase(i ,1);
            i = s.size();
        }
        else
        break;
    }
    cout << s ;
    
    return 0;
}
