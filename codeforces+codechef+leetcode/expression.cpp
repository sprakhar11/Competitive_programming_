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
    int a,b,c;
   cin>>a>>b>>c;
   int m[6];
   m[0]=a*b*c;
   m[1]=a+b+c;
   m[2]=a*b+c;
   m[3]=a+b*c;
   m[4]=a*(b+c);
   m[5]=(a+b)*c; 
   cout<<*max_element(m,m+6);
    return 0;
}
