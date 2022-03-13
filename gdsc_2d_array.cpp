#include <bits/stdc++.h>
#define ll long long int
#define MOD 1000000007
using namespace std;
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("error.txt", "w", stderr);
    #endif
  ll t =1;
  cin>>t;
  while(t--)
  {
   ll n,m;
    cin>>n>>m;
    ll a[n][m];
    if(m==1)
    {
      for(ll i=1;i<=n;i++)
      cout<<i<<"\n";
      continue;
    }
    if(n<m)
    {
      ll ff=1,ct1=3;
      ll ct=0;
      ll ins=1;
      ll p=0;
      ll pp=m-1;
      for(ll i=0;i<m;i++)
      {
          a[0][i]=ins+ct;
        ins=ins+ct;
        if(ct<n)
        ct++;
      }
      ins=1,ct=2;
      for(ll i=1;i<n;i++)
      {
          a[i][0]=ins+ct;
        ins=ins+ct;
        if(ct<n)
        ct++;
      }
      ct=2;
      for(ll j=1;j<n;j++)
      {
      for(ll i=1;i<m;i++)
      {
        if(i<pp)
        {
        a[j][i]=a[j][i-1]+ct;
        if(ct<n)
        ct++;
        }
        else
        {
          if(ct>0)
          ct--;
          a[j][i]=a[j][i-1]+ct;
        }
      
      }
      pp--;
      ct=ct1;
      ct1++;
      
    }

    }
    if(n>=m)
    {
      ll ff=1,ct1=min(4ll,m);
      ll ct=0;
      ll ins=1;
      ll p=0;
      ll pp=n-1;
      for(ll i=0;i<m;i++)
      {
          a[0][i]=ins+ct;
        ins=ins+ct;
        if(ct<m)
        ct++;
      }
      ins=1,ct=2;
      for(ll i=1;i<n;i++)
      {
          a[i][0]=ins+ct;
        ins=ins+ct;
        if(ct<m)
        ct++;
      }
      ct=min(m,3ll);
      for(ll j=1;j<m;j++)
      {
      for(ll i=1;i<n;i++)
      {
        if(i<pp+1)
        {
        a[i][j]=a[i-1][j]+ct;
        if(ct<m)
        ct++;
        }
        else
        {
          if(ct>0)
          ct--;
          a[i][j]=a[i-1][j]+ct;
        }
      
      }
      pp--;
      ct=ct1;
      if(ct1<m)
      ct1++;
      
    }
    }
    for(ll j=0;j<n;j++)
      {
      for(ll i=0;i<m;i++)
      {
        cout<<a[j][i]<<" ";
      }
      cout<<"\n";
      }
    
}

}