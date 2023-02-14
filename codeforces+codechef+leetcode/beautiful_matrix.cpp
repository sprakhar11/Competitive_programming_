#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <bits/stdc++.h>
#include <vector>
#include <cstdlib>
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
    int matrix[5][5];
    int posi,posj;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin>>matrix[i][j];
            if(matrix[i][j]==1)
            {
                posi=i;
                posj=j;
            }
        }
        
    }
    cout<<abs(int(posi-2))+abs(int(posj-2));

    
    return 0;
}
