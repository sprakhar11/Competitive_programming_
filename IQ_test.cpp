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
    int n,e=0,o=0,oind=0,eind=0;
    cin >> n;
    int arr[n];
    for(int &x:arr)
    cin >> x;
    for (int i = 0; i < n; i++)
    {
        if (arr[i]% 2 ==0)
        {
            e++;
            if(e==1)
            eind=i;
            continue;
        }
        o++;
        if(o==1)
        oind=i;        
    }
    if(o==1)
    cout<< ++oind;
    else
    cout << ++eind;
    
    
    return 0;
}
