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
    int t=1;
    cin>>t;
    while (t--)
    {
        int n, m, k;
        cin >> n >> m >> k;
        int ar[k];
        for(int &x:ar)
        {
            cin >> x;
        }
        int cnt[n+m+1]={0};
        for (int i = 0; i < k; i++)
        {
            //cout<< " ar" << ar[i]<<k<<endl;
            cnt[ar[i]]++;
        }
        /* for (int i = 0; i < m+1; i++)
        {
            cout << cnt[i];
        } */
        //cout << endl;
        vector <int> ans;int count=0;
        for (int i = 1; i <= n; i++)
        {
            if(cnt[i] > 1)
            {
                count++;
                ans.push_back(i);
            }
        }
        if(count == 0)
        {
            cout << count << endl;
        }
        else
        {
            cout << count << " ";
            for (int i = 0; i < ans.size(); i++)
            {
                cout << ans[i] ;
                if( i != count -1)
                cout << " ";
            }
            cout << endl;
        }
        
        
        


    }
    return 0;
}
