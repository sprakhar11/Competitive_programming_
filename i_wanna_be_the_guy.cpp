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
    int n , a , b;
    cin >> n >> a;
    int aar[a];
    for(int &x:aar)
    cin >> x;

    cin >> b;

    int bar[b];

    for(int &x:bar)
    cin >> x;
    
    int arr[a+b]={0};
    for (int i = 0; i < a; i++)
    {
        arr[i]=aar[i];
    }
    for (int i = 0; i < b; i++)
    {
            arr[i+a]=bar[i];
    }
    /* for (int i = 0; i < a+b; i++)
    {
        cout<<arr[i]<<endl;
    } */
    sort( arr , arr +a+b);
    /* for(int x:arr)
    cout<<x<<endl; */
    int f=0;int k=0;
    for (int i = 1; i <= n; i++)
    {
        f=0;
        for (int j = k; j < a+b; j++)
        {
            if(i == arr[j])
            {
                k=k+1;
                f=1;
                break;
            }
        }
        if(f==0)
        {
            cout << "Oh, my keyboard!";
            return 0;
        }
        
    }
    cout << "I become the guy.";
    
    return 0;
}
