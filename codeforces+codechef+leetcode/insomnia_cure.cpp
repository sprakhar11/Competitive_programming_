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
    int k,l,m,n,d;
    cin>>k>>l>>m>>n>>d;
    int cnt=0;
    for (int i = 1; i <= d; i++)
    {
        if(i % k ==0 || i % l ==0 || i % m ==0 || i % n ==0 )
        {
            cnt++;
            
        }
        
        
    }
    cout<<cnt;
    
    
    
    return 0;
}
