#include<bits/stdc++.h>
using namespace std;
#define ll long long int
 int main()
{  ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("error.txt", "w", stderr);
    #endif
  ll t;
  cin>>t;
 while(t--)
 {
   ll n,c=0;
   cin>>n;
   string tt,s;
   cin>>s>>tt;
   for(ll i=0;i<n;i++)
   { 
       if(s[i]=='1' && tt[i]=='0')
       {
           for(ll j=0;j<n;j++)
           {
              if(tt[j]=='1'&& s[j]=='0')
              {
                  c++;
                  tt[j]='a';
                  s[j]='a';
                  s[i]='a';
                  tt[i]='a';
                  break;
              }
           }
           
       }
      
        if(s[i]=='1' && tt[i]=='1')
       {
            
            
        
            for(ll j=0;j<n;j++)
            {
                if(s[j]=='0' && tt[j]=='0')
                {
                    c++;
                   
                      tt[j]='a';
                       s[j]='a';
                       s[i]='a';
                       tt[i]='a';
                       break;

                }
            }
       }
   }
            for(ll i=0;i<n;i++)
            {
                if(s[i]=='1' && tt[i]=='1')
                {
            for(ll j=0;j<n;j++)
            {
                if(j!=i)
                {
                if((s[j]=='1' && tt[j]=='1') ||(s[j]=='0' && tt[j]=='1') || (s[j]=='1' && tt[j]=='0'))
                {
                    c++;
                      tt[j]='a';
                       s[j]='a';
                       s[i]='a';
                       tt[i]='a';
                       break;

                }
                }
            }
                }
            }
 
       
       

   
   cout<<c<<"\n";
 //  cout<<s<<" "<<tt;
  
 }
}