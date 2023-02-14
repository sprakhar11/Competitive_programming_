#include <bits/stdc++.h>
#define lli long long int
#define mod 1000000007
using namespace std;
// prakhar_0007
int main() {
    
    
    lli t = 1;
    cin >> t;
    while (t--) {
        int n ;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int l[n+1];
        int r[n+2];
        l[0]=0;
        for (int i = 1; i <= n; i++)
        {
            l[i]+=arr[i-1]+l[i-1];

        }
        r[n+1]=0; 
        for (int i = n; i >=1; i--)
        {
            r[i]=r[i+1]+arr[i-1];
            //cout << r[i];
        }
        int f = 0;
        for (int i = 0; i < n; i++)
        {
            if(l[i]==r[i]){
                f = 1;
                cout << "YES\n";
                break;
            }
        }
        if(f==0)
        {
            cout << "NO\n";
        }
        
        
        
    }
    return 0;
}
