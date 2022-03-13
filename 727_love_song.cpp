#include <bits/stdc++.h>
#define lli long long int
#define mod 1000000007
using namespace std;
// prakhar_0007
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int n , q ;
    string s;
    cin >> n >> q >> s;
    lli sum = 0;
    int arr[27] = {0};
    for (int j = 0; j < q; j++)
    {
        sum = 0;
        int l , r ;
        cin >> l >> r;
        
        string sb = s.substr(l - 1 , r - l +1);
        //cout << sb << endl;
        for (int k = 1; k < 27; k++)
        {
            arr[k]=0;
            //cout << arr[k] << endl;
        }
        /* for (int i = 0; i < r -l+1; i++)
        {
            arr[sb[i] - 96]++;
        } */
        for (int k = 1; k < 27; k++)
        {
            sum += k * arr[k];
            //cout << arr[k] << endl;
        }
        cout << sum << "\n";
        
        
    }
    
    return 0;
}
