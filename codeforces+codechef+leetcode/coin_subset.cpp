#include <bits/stdc++.h>
#define ll             long long
#define pb             push_back
#define ld             long double
#define lala           for(ll i=0;i<n;i++)
#define si             set <int>
#define vi             vector <int>
#define pii            pair <int, int>
#define vpi            vector <pii>
#define vpp            vector <pair<int, pii>>
#define mii            map <int, int>
#define mpi            map <pii, int>
#define spi            set <pii>
using namespace std;
ll n,b;
vi g[30001];
bool vis[30001]={0};

void dfs(int vertex)
{
    vis[vertex]=1;
    for(auto child:g[vertex])
    {
        if(vis[child]) continue;
        dfs(child);
    }
}

void hello()
{
    ll x;
    cin>>n>>b;
    vi v;
    for(int i=0;i<n-1;i++)
    {
        cin>>x;
        v.push_back(x);
    }
    for(int i=0;i<n-1;i++)
    {
        g[i+1].push_back(i+1+v[i]);
    }
    //  for (int i=1;i<n;i++)
    // {
    //     cout<<i<<" : ";
    //     for(auto m:g[i])
    //     cout<<m<<" ";
    //     cout<<endl;
    // }
    dfs(1);
    if(vis[b]==1)
    cout<<"YES"<<endl;
    else 
    cout<<"NO"<<endl;
}
int main()
{
    int t=1;
    // cin>>t;
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("error.txt", "w", stderr);
    #endif
    while(t--)
    {
        hello();
    }
}