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
int value(int x, int y)
{
    
    int n = x + y - 1;
    
    int value = ((n * (n - 1)) / 2) + x;
    return value;
    
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int t;
    cin >> t ;
    while (t--)
    {
        int x1,y1,x2,y2;
        cin >> x1 >> y1 >> x2 >> y2;
        int row = x2-x1;
        int col = y2-y1;

        lli sum = 0;
        for (int i = 0; i <= row; i++)
        {
            sum += value(x1,y1);
            //cout << value(x1,y1) << endl;
            x1++;
        }
        y1++;
        for (int i = 0; i < col; i++)
        {
            sum += value(x2,y1);
            //cout << value(x2,y1) << endl;
            y1++;
        }
        cout << sum << endl;
        
        
    }
    
    return 0;
}
