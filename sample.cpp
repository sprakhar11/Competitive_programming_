#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define MOD 1000000007
#define all(x) (x).begin(), (x).end()
#define fast_io                     \
ios_base::sync_with_stdio(false); \
cin.tie(NULL)
#define endd cout <<"\n";
using namespace std;
//-------------------------------------------------------------CODE HERE-----------------------------------------------------
vector<ll>vv[32];
void solve()
{
 for(ll i=0;i<32;i++)
 {
     vv[i].clear();
 }
ll n;
cin>>n;
vector<ll>v(n);
for(ll &x:v)
cin>>x;
vector<ll>msb;


for(ll x:v)
{
    if(x==0)
    {
        msb.pb(0);
        continue;
    }
   for(ll i=32;i>=0;i--)
   {
      if((ll)(1ll<<i)&x)
      {
          msb.pb(i+1);
          break;
      }
   }
}
// for(ll x:msb)
// cout<<x<<" ";
// endd;


for(ll i=0;i<32;i++)
{
    for(ll j=0;j<n;j++)
    {
        vv[i].pb(0);
    }
}

for(ll i=0;i<n;i++)
{
    vv[msb[i]][i]=1;
}
// presum

for(ll i=0;i<32;i++)
{
    for(ll j=1;j<n;j++)
    {
        vv[i][j]+=vv[i][j-1];
    }
}
for (int i = 0; i < 32; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << vv[i][j] << " ";
        }
        cout << endl;
        
    }
ll q;
cin>>q;
for(ll i=0;i<q;i++)
{
    ll l,r,x;
    cin>>l>>r>>x;
    l--;
    r--;
    ll xx=x;
     for(ll i=32;i>=0;i--)
   {
      if(((ll)(1ll<<i))&x)
      {
          xx=i+1;
          break;
      }
   }
   cout<<xx<<"\n";
    ll tot=r-l+1;
    if(l!=r)
    {
        ll ct=0;
        if(l==0)
        {
          ct= vv[xx][r];
        }
        else if(l!=0)
        {
          ct= vv[xx][r]-vv[xx][l-1];
        }
        // cout<<"*"<<ct<<"\n";
        ll ans=tot-ct; 
        cout<<ans<<"\n";
    }
    if(l==r)
    {
        if((v[l]^x) > (v[l]&x))
        cout<<1<<"\n";
        else
        cout<<0<<"\n";
    }
  
}



  
  
  
 
}
 
 
 
int main()
{
  fast_io;
  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("error.txt", "w", stderr);
    #endif
  ll t;
  t = 1;
  cin>>t;
  //ll tt=1;
 while (t--)
  {
 
    //cout<<"CASE "<<tt<<"**"<<"\n\n";
    solve();
    //tt++;
  }
}