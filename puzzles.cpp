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
    cin >> n >> k;
    int arr[k]={0};
    for(int &x:arr)
    {
        cin >> x;
    }
    sort(arr , arr + k);
    int diff=arr[n-1]-arr[0];
    for (int i = 0; i <= k-n; i++)
    {
        //cout << k-n-1 << endl;
        if((arr[i+n-1]-arr[i]) < diff )
        diff = arr[i+n-1]-arr[i];
    }
    cout << diff;
    return 0;
}
