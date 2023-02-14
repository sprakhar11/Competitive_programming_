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
    int n,flag=1;
    cin >> n;
    int ln[]={4,7,44,47,74,77,444,447,474,477,744,747,774,777};
    for (int i = 0; i < 14; i++)
    {
        if(n % ln[i]== 0)
        {
            cout << "YES";
            flag =0;
            break;
        }
    }
    if(flag == 1)
    cout<< "NO";
    return 0;
}
