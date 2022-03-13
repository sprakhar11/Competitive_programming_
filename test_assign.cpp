#include <bits/stdc++.h>
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#define lli long long int
#define mod 1000000007
using namespace std;
// prakhar_0007
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int n , x ;
    cin >> n >> x ;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int k ;
        cin >> k ;
        v.push_back(k);
    }

    lli cnt = 0;
   // lli sum = 0;
    sort( v.begin(), v.end() );
    /* for (int i = 0; i < n; i++)
    {
        cout << v[i] << " " ;
    }
    cout << endl; */
    if(n==1)
    {
        cout << 1 ;
        return 0;
    }

    int p1 = 0; int p2 = n-1;
    while(p2 >=p1)
    {
        
        if((v[p1] + v[p2]) <= x)
        {
            cnt++;
            p1++;
            p2--;
        }
        else
        {
            cnt++;
            p2--;
        }
       // cout << cnt << p1 << p2 << endl;
    }
    
    if(p1==p2)
    cnt++;
    
    cout << cnt;
    
    return 0;
}
