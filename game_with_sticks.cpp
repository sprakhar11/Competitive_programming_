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
    int x, y;
    cin >> x >> y ;
    int minn=( x < y )? x : y;
    if(minn % 2 == 0)
    cout<<"Malvika";
    else
    cout<<"Akshat";
    return 0;
}
