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
    lli t=1,tmp;
    cin>>t;
    tmp=++t;
    int dig[4];
    for (int i = 3; i >= 0; i--)
    {
        dig[i]=tmp%10;
        tmp/=10;
    }
    
    for (int i = 0; i < 8000; i++)
    {
        
        if(dig[0]!=dig[1] && dig[0]!=dig[2] && dig[3]!=dig[0] && dig[3]!=dig[1] && dig[1]!=dig[2] && dig[3]!=dig[2] )
        {
            break;
        }
        t++;
        tmp=t;
        for (int i = 3; i >= 0; i--)
        {
        dig[i]=tmp%10;
        tmp/=10;
        }

    }
    cout<<dig[3]+10*dig[2]+100*dig[1]+1000*dig[0];
    
    
    return 0;
}
