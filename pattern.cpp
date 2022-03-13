#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int k=1,y=0;
    int p=2*n-1;
    int a[p][p];
    for(int i=0;i<p;i++)
    { 
     for(int j=0;j<p;j++)
     {  k=1;
         while(k<=i+1)
         {
             if(i==k-1 || j==k-1 || i==p-k || j==p-k)
             {cout<<n-k+1;
             break;
             }
             k++;
         }
        
     }
     cout<<"\n";
     

   }
}