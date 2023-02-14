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
    lli t=1;
    cin>>t;
    while (t--)
    {
        int a,b,c,d,k;
        cin >> a >>b >> c >> d >>k;
        int m_steps = abs(a - c) + abs(b - d);
        if(k >= m_steps)
        {if(k % 2 ==0 && m_steps % 2== 0)
        cout << "YES" << "\n";
        else if (k % 2 !=0 && m_steps % 2!= 0)
        cout << "YES" << "\n";
        else
        cout << "NO" << "\n";}
        else
        cout << "NO" << "\n";

        //cout << m_steps << " " << k << endl;
    }
    return 0;
}
