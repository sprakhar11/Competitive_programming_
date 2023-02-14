#include <bits/stdc++.h>
#define lli long long int
#define mod 1000000007
using namespace std;
bool cmp ( int a ,int b)
{
    return a > b;
}
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
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " " ;
    }
    cout << endl;
}
void solve()
{
    int n ; 
    cin >> n;
    vector<int> a;
    vector<int> b;
    vectorinput(a ,n);
    vectorinput(b ,n);
    sort(a.begin(), a.end() , cmp);
    sort(b.begin(), b.end());
    printvec(a);
    int k = n - floor((double)n/4.0);
    int suma = accumulate(a.begin(), a.begin()+k , 0);
    int sumb = accumulate(b.begin(), b.begin()+k , 0);
    cout << sumb << endl;
    int st = 0;
    
    
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
