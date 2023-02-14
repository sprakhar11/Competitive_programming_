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
    lli t=1;
    cin>>t;
    while (t--)
    {
        int g, p;
        cin >> g >> p;
        
        int arr[11]={0};
        for (int i = 1; i < 11; i++)
        {
            cin >> arr[i];
        }
        
        
        
        /* for (int i = 8; i >= 0; i--)
        {
            arr[i] += arr[i+1];

        } */
        int i=10;
        int days=1;
        int minn = 0 , maxx = 0;
        while (true)
        {
            if( g == i )
            {
                
                minn = days;
                if(p >= arr[i])
                maxx = days;
                else
                {
                    if(arr[i] % 2 == 0)
                    {
                        maxx = arr[i] / p + days - 1 ;
                    }
                    else
                    maxx = arr[i] / p + days;
                    
                }
                break;
            }
            else
            {
                days += arr[i] / p ;
               //cout << days <<endl;
                arr[i-1] += arr[i] % p;
                i--;

            }
            
        }
        
        
        cout << minn << " " << maxx << endl;

        
        
    }
    return 0;
}
/* 6 6
6 7
1 1 */