#include <bits/stdc++.h>
using namespace std;
int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    long long t;
    cin>>t;
    while(t--){
        long long n,m;
        cin>>n>>m;
        long long a[n],b[m];
        for(int i=0;i<n;i++)
        cin>>a[i];
        for(int i=0;i<m;i++)
        cin>>b[i];
        sort(a,a+n);
        sort(b,b+m,greater<int>());
        long long suma=0,sumb=0;
        for(int i=0;i<n;i++){
            suma+=a[i];
        }
        for(int i=0;i<m;i++){
            sumb+=b[i];
        }
        long long count=0,flag=0;
        if(suma>sumb){
            cout<<0<<endl;
        }
        else{
            int x = min(m,n);
            for(int i=0;i<x;i++){
                suma+=(b[i]-a[i]);
                sumb+=(a[i]-b[i]);
                count++;
                if(suma>sumb)
                    break;
            }
            if(suma<=sumb)
                cout<<-1<<endl;
            else
                cout<<count<<endl;
        }
    }
}