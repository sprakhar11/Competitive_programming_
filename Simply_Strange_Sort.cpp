#include <bits/stdc++.h>
#define lli long long int
#define MOD 1000000007
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
void printvec(vector<int> &v)
{
    cout << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " " ;
    }
    cout << endl;
}
bool check( vector<int> &v , int n ){
    for (int i = 0; i < n; i++)
    {
        if(v[i]!= i+1)
        return true;
    }
    return false;
}
void solve()
{
    int n ;
    cin >> n;
    vector<int> v;
    vectorinput(v , n);
    //printvec(v);
    int c = 0 ;
    while (check(v,n))
    {   c++;
        if(c % 2 != 0){
        for (int i = 1; i < n; i++)
        {
            if( v[i-1] > v[i])
            {
                swap(v[i-1], v[i]);
                
                
            } 
            i++;
           
        }
        }
        else
        {
            for (int i = 2; i < n; i++)
            {
                if( v[i-1] > v[i])
                {
                    swap(v[i-1], v[i]);
                    
                    
                } 
                i++;
           
            }
        }

         //printvec(v);
        
    }
    cout << c << "\n";
    
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
