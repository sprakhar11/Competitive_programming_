#include<bits/stdc++.h>
using namespace std;
#define ll long long int
 int main()
{  
  int t;
  cin>>t;
  while(t--)
  {
      int n,q;
      cin>>n>>q;
      int a[n];
      for(int &x:a)
      cin>>x;
     int e[n+1];
     int o[n+1];
     e[0]=0;
     o[0]=0;
     for(int i=1;i<=n;i++)
     {
         if((a[i-1]%2)==0)
         { 
        e[i]=e[i-1]+1;
         o[i]=o[i-1];
         }
         else
         {
         o[i]=o[i-1]+1;
         e[i]=e[i-1];
         }
     }
     
   
   while(q--)
   {  int c1=0,c2=0,tot=0; int l,r;
      cin>>l>>r;
      int n1=e[r]-e[l-1];
      int n2=o[r]-o[l-1];
     // cout<<"*"<<n1<<" "<<n2<<"\n";
     
      if(n2>=2 && n1>=1)
      {
          tot+=(n2*(n2-1)*n1)/2;
      }
      if(n1>=3)
      tot+=n1*(n1-1)*(n1-2)/6;
      cout<<tot<<"\n";
   }

     

  }
}