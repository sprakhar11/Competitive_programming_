#include <bits/stdc++.h>
#define lli long long int
#define MOD 1000000007
using namespace std;
void solve()
{
    int n ; 
    string s;
    cin >> n >> s;
    vector<int> v;
    if ( n == 1 )
    {
        cout << "-1 -1\n" ;
        return;
    }
    for (int i = 0; i < n; i++)
    {
        v.push_back(s[i]=='a' ? 0 : 1);
    }
    // for (int i = 0; i < n; i++)
    // {
    //     cout << v[i] << endl;
    // }
    
    // for (int i = 1; i < n; i++)
    // {
    //     v[i] += v[i-1] ;
    // }
    for (int i = 0; i < n; i++)
    {
        for (int j = 1 +i ; j < n; j=j+2)
        {
            
                int a = count( v.begin()+ i ,v.begin()+ j + 1 , 1 );
                //cout << "a==" << a << endl;
                if ( a == (j-i+1) / 2);
                {
                    cout << i+1 << " "<< j + 1 << endl;
                    return;
                }
            
        }
        
    }
   cout << "-1 -1\n" ;
    
    
    
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    lli t = 1 ;
    cin >> t ;
    for (int i = 0; i < t; i++)
    {
        solve();
    }
    
    return 0;
    
}
