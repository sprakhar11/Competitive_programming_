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
    int maxh=0;
    int minh=INT_MAX;
    int n,pos1=0,pos2=0;
    cin>>n;
    int a[n];
    for(int &x:a)
    cin>>x;
    for (int i = 0; i < n; i++)
    {
        if(a[i]<=minh){
           pos1=i;
           minh=a[i];
        }
        if(a[i]>maxh)
        {
            pos2=i;
            maxh=a[i];
        }
    }
    if(pos1<pos2)
    cout<<pos2-1+n-pos1-1;
    else
    cout<<pos2-1+n-pos1;
    return 0;
}
