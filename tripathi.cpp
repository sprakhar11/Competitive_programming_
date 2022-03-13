#include <bits/stdc++.h>
using namespace std;
#define int long long
void shreyark()
{  
  int n;
  cin>>n;
  if(n==1)
  {
    int x;
    cin>>x;
    cout<<x<<endl;
  }
  else
  {
    int a[n];
  for (int i = 0; i < n; i++)
  {
    cin>>a[i];
  }
  for(int i = 0; i < n; i++)
  a[i]=abs(a[i]);
  int s1=0,s2=0;
  for(int i = 0; i < n; i++)
  {
    if(i%2==0)
    s1+=a[i];
    else
    s2+=a[i];
  }int s=a[0];
  for(int i=0;i<n;i+=2)
{
    
  if(a[i]<s)
  s=a[i];
}
int g=a[1];
for(int i=1;i<n;i+=2)
{
  if(a[i]>g)
  g=a[i];
}
// cout<<s1<<" "<<s2;

s1=s1-s+g;
s2=s2-g+s;
cout<<s1-s2<<endl;
}
  
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("error.txt", "w", stderr);
    #endif
    int t = 1 ;
    cin >> t ;
    for (int i = 0; i < t; i++)
    {
        shreyark();
    }
    
    return 0;
    
}