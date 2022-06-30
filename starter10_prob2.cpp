#include <bits/stdc++.h>
#define ll long long int
#define MOD 1000000007
using namespace std;

void vectorinput( vector<ll> &v , ll n )
{
    for (ll i = 0; i < n; i++)
        {
            ll x ;
            cin >> x;
            v.push_back(x);
            
        }
    
}
bool binsea(vector<ll> &v , ll n )
{
    //cout << n ;
    ll start  = 0 ;
    ll  end  = v.size()-1;
    while ( end >= start )
    {
        ll mid = start +  ( end - start) / 2 ;
        // cout <<"mid="<< mid<< endl;
        // cout <<"hi" << v[mid] << endl;
        if ( n == v[mid] ) {
            return true;
        }
        if ( n < v[mid] )
            start = mid + 1;
        else
        end = mid -1 ;
    }
    //cout << "hi" ; 
    return false;
}
void solve()
{
    ll n ;
    cin >> n;
    vector<ll> a ;
    vector<ll> b ;
    vectorinput(a , n);
    vectorinput(b , n-1);
    
    sort( a.begin(), a.end(), greater<int>() );
    sort( b.begin(), b.end(), greater<int>() );
    // for (int i = 0; i < n-1; i++)
    // {
    //     cout << b[i] << endl;
    // }
    // cout << binsea(b , 11) << endl;
    // cout << binsea(b , 4);
    // cout << b[2];
    //cout << n ;
    // if ( n == 2)
    // {
    //     cout << b[0]  - a[0]<< endl;
    //     return;
    // }
    for (int i = 0; i < n; i++)
    {
        int cnt = 0 ;
        int diff = b[0] - a[i];
        if(diff <=0)
        continue;
        for (int j = 0; j < n ; j++)
        {
            if (j !=i)
            {
                int p = a[j] + diff;
                //cout << p << endl;
                if(binsea(b , p))
                {
                    cnt++;
                }
            //cout << binsea(b , p) << endl;
            }
            // bool l = binary_search(b.begin(), b.end(), 15);
            // cout << l << endl;
        }
        //cout << n << endl;
        if( cnt == n -2 )
        {
            cout << diff << endl; 
            return;
        }
        
        
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("error.txt", "w", stderr);
    #endif
    ll t = 1 ;
    cin >> t ;
    for (ll i = 0; i < t; i++)
    {
        solve();
    }
    
    return 0;
    
}
