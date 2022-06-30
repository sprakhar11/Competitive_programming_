#include <bits/stdc++.h>
#define lli long long int
#define mod 1000000007
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    /* #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif */
    lli t = 1;
    cin >> t;
    while (t--) {
        int n ; 
        cin >> n;
        vector <int> v;
        for (int i = 0; i < n; i++)
        {
            int x ;
            cin >> x;
            v.push_back(x);
        }
        sort ( v.begin(), v.end());
        //cout << "chk1";
        //v[n-1] = v[0];
        int tmp = v[0];
        v[0]= v[1];
        int cnt = 0;
        vector <int> vt;
        for (int i = 0; i < n; i++)
        {
            vt.push_back( v[i] % v[0]);
        }
        for (int i = 0; i < n; i++)
        {
            if( vt[i]!=0)
            {
                cnt++;
            }
        }
        if(cnt==0 )
        {
            lli sum =0 ;
            for (int i = 0; i < n; i++)
            {
                sum += v[i] / v[0];
            }
            cout <<sum << endl;
            

        }
        else
        {
            v[0] = tmp ;
            vt.clear();
            for (int i = 0; i < n; i++)
            {
                 vt.push_back( v[i] % v[0]);
            }
            cnt = 0;int index = 0 ;
            int tmpp=0;
            cnt = 0;
            for (int i = 0; i < n; i++)
            {
                if( vt[i]!=0)
                {
                    cnt++;
                    index = i ;
                    
                }
                
            }
            
            if(cnt==0)
            {
                lli sum = 0;
                for (int i = 0; i < n-1; i++)
                {
                    sum += v[i] / v[0];

                }
                cout << sum + 1 << endl;
                

            }
            else if(cnt == 1)
            {
                tmpp = v[index];
                v[index] = v[0];
                lli sum =0 ;
                for (int i = 0; i < n-1; i++)
                {
                    sum += v[i] / v[0];

                }
                cout << sum  << endl;

            }
            else
            {
                v[index] = tmpp;
                lli sum = 0 ;
                for (int i = 0; i < n-1; i++)
                {
                    sum += v[i] ;

                }
                cout << sum  << endl;

            }
            
        }
        
        

    }
    return 0;
}
