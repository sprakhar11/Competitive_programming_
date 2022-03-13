#include <bits/stdc++.h>
#include<vector>

using namespace std;


int main()
{
   int t;
   cin>>t;
   while(t--)
   {
      int n;
      vector<int>v1;
      cin>>n;
      for(int i=0;i<n;i++)
      {
          int z;
          cin>>z;
          v1.push_back(z);
          
      } 
      string v2;
      cin >> v2;
     vector<pair<int,int>>z;
     vector<pair<int,int>>o;

     for(int i=0;i<n;i++)
     {
         if(v2[i]=='0')
         {
              z.push_back( make_pair(v1[i],i) );
         }
         else
          o.push_back( make_pair(v1[i],i) );
     }
      sort(z.begin(), z.end());
       sort(o.begin(), o.end());
       int arr[n];
       
       for(int i=0;i<n;i++)
       {
           if(z.size()>i)
           arr[z[i].first]=i+1;
           else
           arr[o[i].first]=i+1;
       }
       for(int i=0;i<n;i++)
       {
           cout<<arr[i];
       }
       cout<<endl;
   }
       
    return 0;
}