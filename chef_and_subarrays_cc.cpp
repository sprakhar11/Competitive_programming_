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
        int n , k;
        cin >> n >> k;
        int arr[n];
        for(int &x:arr)
        cin >> x;
        vector <int>sum;
        for (int i = 0; i <= n-k; i++)
        {
            int summ=0;
            for (int j = i; j < k+i; j++)
            {
                summ +=arr[j];
                //cout << summ << arr[j]<<endl;
            }
            sum.push_back(summ);
            
            
        }
        
        sort(sum.begin(), sum.end());
        int maxx=1;int cnt=1;
        for ( int i = 1; i < sum.size(); i++)
        {
            
            if(sum[i] == sum[i-1])
            {
                cnt++;
                if(cnt > maxx)
                maxx = cnt;

            }
            else
            cnt=1;
        }
            
        cout << (sum.size()- maxx) * k <<endl;
        /* for( int x:sum)
        cout << x << endl; */
         
        

    }
    return 0;
}