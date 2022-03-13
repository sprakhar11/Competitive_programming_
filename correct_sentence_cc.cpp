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
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    lli t=1;
    cin>>t;
    while (t--)
    {
        int k;
        cin >> k;
        string s[k];
        for (int i = 0; i < k; i++)
        {
            cin >> s[i];
        }
        int cnt1=0,cnt2=0;int f=0,f2=0;int count=0;
        for (int i = 0; i < k; i++)
        {
            string schk=s[i];
            cnt1=0;cnt2=0;
            for (int j = 0; j < schk.size(); j++)
            {
                
                if(schk[j] >= 'a' && schk[j] <= 'm')
                cnt1++;
                else if(schk[j] >= 'N' && schk[j] <= 'Z')
                cnt2++;
                

            }
           // cout << cnt1 << cnt2 << endl;
            /* if(f2 == 1 || schk.size()==1)
            {
                cout << "NO"<<"\n";f=1;
                break;
            } */
            if((cnt1==schk.size() || cnt2==schk.size()) )
            {
                count++;
            }
            
        }
        if(count==k)
        {
            cout << "YES"<<"\n";
        }
        else
        cout << "NO"<<"\n";
        
    }
    return 0;
}
