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
    int n=0;
    cin>>n;
    if(n % 2 != 0)
    {
        cout<<-1;

    }
    else
    {
        for (int i = 1; i <= n; i++)
        {
            cout<<i+1<<" ";
            cout<<i<<" ";
            i++;
        }
        
    }
    return 0;
}
