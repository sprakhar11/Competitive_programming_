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
    lli t=1;
    cin>>t;
    while (t--)
    {
        int cnt = 0;
        int n , l , r ;
        cin >> n >> l >> r;
        vector<long long> v;
       // v.push_back(0);
        for (int i = 0; i < n ; i++)
        {
            int x;
            cin >> x ;
            v.push_back(x);
        }
        sort(v.begin(), v.end());
        lli ans = 0;
        for (lli i = 0; i < n-1; i++)
        {
            auto itr1= lower_bound(v.begin()+i+1, v.end() , l -v[i]);
            auto itr2= upper_bound(v.begin()+i+1 , v.end(),r- v[i]);
            // cout << itr1  <<"\n" ;
            // cout << itr2 <<"\n" ;
            cout << (itr2-itr1) <<"\n" ;
            cout << itr1 - v.begin() << "\n" ;
            cout << itr2 - v.begin() << "\n" ;

            ans+=(itr2-itr1);
        }
        
        //cout << ans <<"\n";

        
    }
    return 0;
}