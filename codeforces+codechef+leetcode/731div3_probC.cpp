#include <bits/stdc++.h>
#define lli long long int
#define mod 1000000007
using namespace std;
void vectorinput( vector<int> &v , int n )
{
    for (int i = 0; i < n; i++)
        {
            int x ;
            cin >> x;
            v.push_back(x);
            
        }
    
}
int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    lli t = 1;
    cin >> t;
    while (t--)
    {
        int k , n , m ;
        cin >> k >> n >> m;
        vector<int> vn ;
        vector<int> vm;
        vectorinput(vn , n);
        vectorinput(vm , m);
        vector<int> ans;
        
        int  i =0, j=0;
        
        int f =0 ;
        
        while(i < n && j < m)
        {
            if(k >= min(vn[i], vm[j]) || min(vn[i], vm[j])==0)
            {
                if( (vn[i] <= vm[j]  && k >= vn[i]) || vn[i]==0 )
                {
                    ans.push_back(vn[i]);
                    if( vn[i] ==0) k++;
                    i++;
                    
                    
                    
                   // cout << " loop1" << i << j << endl;
                }
                //cout << vn[i] << endl;
                if(( vn[i] > vm[j]  && k >= vm[j] ) || vm[j]==0 )
                {
                    ans.push_back(vm[j]);
                    if( vm[j] ==0) k++;
                    j++;
                   
                    
                    
                    //cout << "loop2" << i << j<< endl;
                }

            }
            else
            {
                f = 1 ;
                break;
            }

        }
        if( f == 1)
        {
            cout << -1 << "\n";
            continue;
        }
        
        while( i < n )
        {
            if( k >= vn[i] || vn[i] == 0)
            {
                ans.push_back(vn[i]);
                if( vn[i] ==0) k++;
                i++;
            }
            else
            {
                f =1;
                break;
            }

        }
    
    
        while( j < m )
        {
            if( k >= vm[j]  || vm[j]==0)
            {
                ans.push_back(vm[j]);
                if( vm[j] ==0) k++;
                j++;
            }
            else
            {
                f =1;
                break;
            }

        }
    

    

        if( f == 1)
        {
            cout << -1 << "\n";
        }
        else
        {
            for (int i = 0; i < ans.size(); i++)
            {
                
                if ( i+1 == ans.size())
                cout << ans[i] << "\n";
                else
                cout << ans[i] << " " ;
            }
            
        }
    }
    
    return 0;
    
}
