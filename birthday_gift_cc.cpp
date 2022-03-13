#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <bits/stdc++.h>
#include <vector>
#define lli long long int
#define mod 1000000007
using namespace std;

int main()
{
    
     #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
     #endif
    long long int t;
    cin>>t;
    while (t--)
    {
        int n , k;
        cin >> n >> k;
        int arr[n]={0};
        for(int &x:arr)
        cin >> x ;
        sort(arr , arr + n , greater<int>());
        // for(int &x:arr)
        // cout << x ;
       long  int ans1=0;
        long int ans2=0;
        //cout << ans1 <<ans2 << "\n";
        for (int i = 0; i < 2*k+1; i++)
        {
            if(i %2 ==0)
            {
                ans1+=arr[i];
                
            }
            else{
                ans2+=arr[i];
                if(i== 2*k-1)
                {
                    ans2+=arr[++i];
                }
            }
            //cout << ans1 <<ans2 << "\n";
        }
        //cout << ans1 <<ans2 << "\n";
        cout << max(ans1, ans2)<<"\n";
        
    }
    return 0;
}