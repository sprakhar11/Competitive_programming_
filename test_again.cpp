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
    int n , x ;
    cin >> n >> x ;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int k ;
        cin >> k ;
        v.push_back(k);
    }

    lli cnt = 0;
    lli sum = 0;
    sort( v.begin(), v.end() );
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " " ;
    }
    cout << endl;

    
    int f= 0;int f2 = 0;
    for (int i = 0; i < n; i++)
    {
        int k = x-v[0];
        if(k <=0)
        {
            cnt++;
        } 
        else
        {
            if(binary_search(v.begin(),v.end(),k))
            {
                cnt++;
            }
            auto itr1= lower_bound(v.begin(), v.end(), k);
            int indx1 = itr1 - v.begin();
            cout << indx1 <<endl;

        } 
    }
    
    cout << cnt;
    
    return 0;
}
