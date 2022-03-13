#include <bits/stdc++.h>
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
        int n , k;
        cin >> n >> k ;
        int arr1[n];
        int arr2[n];int sum1=0;int sum2=0;
        for(int &x:arr1)
        {
            cin >> x;
            sum1+=x;
        }
        for(int &x:arr2)
        {
            cin >> x;
            
        }
        sort(arr1 , arr1 + n);
        sort(arr2 , arr2 + n , greater<int>());
        
        
        sum2 = sum1;
        for (int i = 0; i < k; i++)
        {
            
            if(arr2[i]> arr1[i])
            {
                //cout << sum2<< "\n";
                sum2 =sum2 - arr1[i] + arr2[i];
                
            }
            else
            break;
            
        }
        cout << sum2 << "\n";
        
        
        

    }
    return 0;
}
