#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <bits/stdc++.h>
#include <vector>
#define lli long long int
#define mod 1000000007
using namespace std;
//prakhar_0007
int main()
{
    
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    lli t=1;
    cin>>t;
    while(t--)
    {
        lli n , m ;
        cin >> n >>m;
        lli a[n], b[m];
        for(lli &x:a)
        {
            cin >> x;
        }
        for(lli &x:b)
        {
            cin >> x;
        }
        lli left[n]={9999}, pos=-1, right[n]={9999};
        for (lli i = 0; i < n; i++)
        {
            if(a[i]==1)
            {
                pos=i;
            }
            left[i]=pos;
            
        }
        pos=-1;
        for (lli i = n-1; i >= 0; i--)
        {
            if(a[i]==2)
            {
                pos= i;
            }
            right[i]=pos;
        }
        /* cout<< "\n";
        for(lli x:left)
        cout << x << " ";
        cout<< "\n";
        for(lli x:right)
        cout << x << " ";cout<< "\n"; */
        lli f=0;
        for (lli i = 0; i < m; i++)
        {
            
            f=b[i];f--;
            if(a[f] == 0)
            {
                //chk left or right
                if(left[f]==-1 && right[f]!=-1)
                cout << right[f]-f<< " ";
                else if(left[f]!=-1 && right[f]==-1)
                cout << f - left[f]<< " ";
                else if(left[f]==-1 && right[f]==-1)
                cout << -1<< " ";
                else 
                cout << (lli)min( f - left[f] , right[f]-f)<< " ";
            }
            else{
                cout << 0 << " ";
            }
        }
        cout << endl;
        /* for(lli x:a)
        cout << x << " ";cout<< "\n"; */
        
    }
    return 0;
}
