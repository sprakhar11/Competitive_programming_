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
    int n;
    cin >> n;
    int arr1[n+1];
    int arr2[n+1];
    for (int i = 1; i < n+1; i++)
    {
        cin >> arr1[i];
    }
    for (int i = 1; i < n+1; i++)
    {
        arr2[arr1[i]]=i;
    }
    for (int i = 1; i < n+1; i++)
    {
        cout << arr2[i]<< " ";
    }

    
    
    
    return 0;
}
