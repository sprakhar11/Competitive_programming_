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
    int n;
    cin >> n ;
    int arr[n];
    for(int &x:arr)
    cin >> x;

    sort( arr, arr + n);
    int pre[n]={0};
    int post[n]={0};
    pre[0]=arr[0];
    post[n-1]=arr[n-1];
    for (int i = 1; i < n; i++)
    {
        pre[i] += pre[i-1] + arr[i];
    }
    for (int i = n-2; i >=0; i-- )
    {
        post[i] = post[i+1] + arr[i];

    }
    /* for (int i = 0; i < n; i++)
    {
        cout << pre[i];
    }
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        cout << post[i];
    } */
    int cnt =0 , flag =0;
    for (int j = n-1; j > 0; j--)
    {
        cnt++;
        if(post[j] == pre[j-1])
        {
            flag=0;
            continue;
            
        }
        
        if(post[j] > pre[j-1])
        {
            flag = 1;
            break;
        }
        
        

    }
    
    if(flag==1)
    cout << cnt;
    else
    cout << n ;
    
    
    
    
    
     
    return 0;
}
