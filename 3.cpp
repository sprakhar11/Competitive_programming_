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
    long long int n;
    cin >> n;
    long long int k=0;int f1=0 ;
    for (long long int i = 1; i <= sqrt(n); i++)
    {
        if(n % i ==0)
        {
            k++;
        }
        if( k > 3)
        {
            f1=1;
            break;
        }
        
    }
    if(f1 == 0 && k==3)
        {
            cout << "YES";
        }
        else
        cout << "NO";
    
    return 0;
}