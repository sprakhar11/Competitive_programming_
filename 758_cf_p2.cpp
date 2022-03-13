#include <bits/stdc++.h>
#define lli long long int
#define MOD 1000000007
using namespace std;
//prakhar_0007
void printvec(vector<int> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " " ;
    }
    cout << endl;
}
void solve()
{
    int n, a , b ;
    cin >> n >> a >> b;
    if(n%2 != 0)
    n++;

    int mx = n / 2 ;
    mx--;
    vector<int> v ;


    if ( a + b <= mx )
    {
        if ( b == 0 )
        {
            int j = 0 ;
            int k = n ;
            int p = 1 ;
            for (int i = 1; i <= n; i++)
            {
                

                if ( i % 2 != 0 )
                {
                    v.push_back(p);
                    p++;
                }
                else
                {
                    v.push_back(k);
                    k--;
                    j++;
                }
                if (j == a)
                {
                    break;
                }
            }
            while (p <= n - a)
            {
                v.push_back(p);
                p++;
            }
            printvec(v);

            
        }
        else if ( a == 0 )
        {
            int j = 0 ;
            int k = 1 ;
            int p = n ;
            for (int i = 1; i <= n; i++)
            {
                

                if ( i % 2 != 0 )
                {
                    v.push_back(p);
                    p--;
                }
                else
                {
                    v.push_back(k);
                    k++;
                    j++;
                }
                if (j == b)
                {
                    break;
                }
            }
            while (p > b )
            {
                v.push_back(p);
                p--;
            }
            printvec(v);
        }
        else
        {
            deque<int> q;
             
            
        }
    }
    else
    {
        cout << -1 << "\n";
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
    lli t = 1 ;
    cin >> t ;
    for (int i = 0; i < t; i++)
    {
        solve();
    }
    
    return 0;
    
}
