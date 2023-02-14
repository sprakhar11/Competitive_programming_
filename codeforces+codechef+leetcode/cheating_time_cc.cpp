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
void check(vector< pair <int,int> > &vect, int i , int a,int b)
{
    for(int j=0; j<vect.size();j++)
    {
        if(a <= vect[j].first && b<=vect[j].second && b >= vect[j].first )
        {
            vect[j].first=a;
        }
        else if(a >= vect[j].first && a<=vect[j].second  &&b>=vect[j].second)
        {
            vect[j].second=b;
        }
        else if(a <= vect[j].first && b>=vect[j].second)
        {
            vect[j].first=a;
            vect[j].second=b;
        }
        else
        {
            vect.push_back( make_pair(a, b));
        }
    }
}
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
        int n , k ,f;
        
        cin >> n >> k >>f;
        vector< pair <int,int> > vect ;
        for (int i = 0; i < n; i++)
        {
            int a , b;
            cin >> a >> b;
            if(i==0)
            vect.push_back( make_pair(a, b));
            else
            check(vect, i,a,b);

        }
        int time=0;
        for (int m = 0; m < vect.size(); m++)
        {
            time +=vect[m].second - vect[m].first;
            //cout<<time<<endl;
        }
        
        //cout<<vect.size()<<endl;
        if(k <= (f-time))
        cout << "YES"<<"\n";
        else
        cout << "NO" <<"\n";
        
    }
    return 0;
}
