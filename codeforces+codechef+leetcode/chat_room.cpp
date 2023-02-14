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
    string s="";
    cin >> s; int cnt=0;
    char arr[5] = { 'h', 'e' ,'l' , 'l' , 'o'};
    int j=0,k=0;
    for (int i = 0; i < 5; i++)
    {
        for ( j = k; j < s.length(); j++)
        {
            if(arr[i] == s[j])
            {cnt++;
              k=j+1;
              break;
            }
        }

        if((cnt - 1) != i)
        break;
        
    }
    if(cnt == 5)
    cout << "YES";
    else
    cout <<"NO";
    
    
    return 0;
}
