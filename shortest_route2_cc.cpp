#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <bits/stdc++.h>
#include <vector>

#define mod 1000000007
using namespace std;
//prakhar_0007
int main()
{
    
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int t=1;
    cin>>t;
    while(t--)
    {
        int n , m ;
        scanf("%d%d", &n , &m );
        int a[n], b[m];
        for(int &x:a)
        {
            scanf("%d", &x);
        }
        for(int &x:b)
        {
            scanf("%d", &x);
        }
        int left[n]={0}, pos=-1, right[n]={0};
        for (int i = 0; i < n; i++)
        {
            if(a[i]==1)
            {
                pos=i;
            }
            left[i]=pos;
            
        }
        pos=-1;
        for (int i = n-1; i >= 0; i--)
        {
            if(a[i]==2)
            {
                pos= i;
            }
            right[i]=pos;
        }
        /* cout<< "\n";
        for(int x:left)
        cout << x << " ";
        cout<< "\n";
        for(int x:right)
        cout << x << " ";cout<< "\n"; */
        int f=0;
        for (int i = 0; i < m; i++)
        {
            
            f=b[i];f--;
            if(f==0)
            {
                printf("0 ");
                continue;
            }
            if(a[f] == 0)
            {
                //chk left or right
                if(left[f]==-1 && right[f]!=-1)
                printf("%d ", right[f]-f);
                else if(left[f]!=-1 && right[f]==-1)
                printf("%d ", f - left[f]);
                else if(left[f]==-1 && right[f]==-1)
                printf("-1 ");
                else 
                printf("%d ", min( f - left[f] , right[f]-f));
            }
            else{
                printf("0 ");
            }
        }
        printf("\n");
        /* for(int x:a)
        cout << x << " ";cout<< "\n"; */
        
    }
    return 0;
}
    