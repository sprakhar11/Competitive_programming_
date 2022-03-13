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
    int n ;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;;
        v.push_back(x);
    }
    reverse( v.begin(), v.end());
    vector<bool> ans(n , true);

    for (int i = 0; i < n; i++)
    {

        if( v[i] !=0 )
        {   int s = i+1;
            for (int j =0 ; j < v[i]; j++)
            {
                if (s < n)
                {
                    ans[s]=false;
                }
                s++;
                
                
            }
            
          //cout << ans[i] <<" ";  
        }
        
    }
    
    int cans = count(ans.begin() , ans.end() , true);
   
    
    cout <<cans ;
    
    
    return 0;
}
