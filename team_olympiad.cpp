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
    int n ;
    cin >> n ;
    int arr[3]={0};
    int ar[n][3]={0};
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        arr[--x]++;
        ar[i][x]=i+1;
        //cout<<ar[i][x];

    }
    int k = min(arr[0], min(arr[1], arr[2]));
    cout << k << endl;
    for (int i = 0; i < k; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int l = 0; l < n; l++)
            {
                if ( ar[l][j] !=0)
                {
                    cout <<ar[l][j]<<" ";
                    ar[l][j]=0;
                    break;
                    
                }
            }
            
        }
        cout<<endl;
        
    }
    
    
    return 0;
}
