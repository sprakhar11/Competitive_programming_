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
    int s, n, f=0;
    cin >> s >> n;
    vector< pair <int,int> > vect ;
    for (int i = 0; i < n; i++)
    {
        int a , b;
        cin >> a >> b;
        vect.push_back( make_pair(a, b));

    }
    sort(vect.begin(), vect.end());
    for (int i=0; i<n; i++)
    {
        if(s > vect[i].first)
        s += vect[i].second;
        else
        {
            
            f=1;
            break;
        }
    }
    if(f==1)
    cout << "NO";
    else
    cout << "YES";
    
    return 0;
}
