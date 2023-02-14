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
    int n ,k;
    cin >> n >> k;int minn=10001;
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            if( (((2 * i) + j) == n) && (((i +j)% k) ==0))
            {
                if(i + j < minn)
                minn= i+j;
            }

        }
        
    }
    if(minn == 10001)
    cout << -1;
    else
    cout << minn;

    
    
    return 0;
}
