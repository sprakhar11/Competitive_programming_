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
    int n , m ;
    cin >> n >> m;char ch = ' ';
    for ( int  i=1 ; i <=n ; i++)
    {

        if( i % 2 == 0 )
        ch='.';
        else ch='#';
        if((i / 2) % 2 ==0){
        cout << "#"; 
        }
        for (int j = 1; j < m; j++)
        {
            cout << ch;

        }
        if((i / 2) % 2 !=0){
        cout << "#"; 
        }
        cout << "\n"; 
    }
    return 0;
}
