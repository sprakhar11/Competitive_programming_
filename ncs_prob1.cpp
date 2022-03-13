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
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int n ; 
    cin >> n;
    vector<int> v ;
    name.vectorinput(v , 10);
    int  f = 0 ;int cnt=0;
    for (int i = 0; i < n; i++)
    {
        int p = v[i];
        f =0 ;
        f=0;
        if(i !=0)
        {
        for (int j = i-1; j >= 0 ; j--){
            if ( p > v[j] )
            {
                
            }
            else
            {
                f =1;
                break;
            }

        }
        if ( f == 0)
        {
            cnt++;
        }
        }
        
        f=0;
        if(i !=0)
        {
        for (int j = i-1; j >= 0 ; j--){
            if ( p < v[j] )
            {
                
            }
            else
            {
                f =1;
                break;
            }
            

        }
        if ( f == 0)
        {
            cnt++;
        }
        }
        
        

    }
    cout << cnt ;
    return 0;
    
}
