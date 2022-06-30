#include<bits/stdc++.h>
#define ll long long int
#define mod 1000000007
using namespace std;

ll gcd(ll a, ll b) {
   if (b == 0)
   return a;
   return gcd(b, a % b);
}
ll LCM(ll a,ll b) {
   ll hcf=gcd(a,b);
   ll lcm=(a*b)/hcf;
   return lcm;
}

int main()
{
  ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("error.txt", "w", stderr);
    #endif
  ll t,n,m;
  cin>>t;
  while(t--)
  {
    cin>>n>>m;
    vector<pair<ll,ll>>v;
    for(ll i=1;i<=m;i++)
    {
      ll x,y;
      cin>>x>>y;
      v.push_back(make_pair(x,y));
    }
    sort(v.rbegin(),v.rend());
    // cout<<v[0].first<<endl;
    ll lcm=v[0].second,c=n/lcm;
    ll sum=(v[0].first)*(n-c);
    ll i=1;
    while(c>0&&i<m)
    {
      lcm=LCM(lcm,v[i].second);
      sum=sum+(v[i].first)*(c-(n/lcm));
      c=n/lcm;
      i++;
      //c--;
    }
    cout<<sum<<endl;
  }
}