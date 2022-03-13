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
int f_sub( int x , int y)
{
    if ( x > y)
    {
        return x - y ;
    }
    return y - x ;
}
bool check ( vector <int> vecOfNums , int d)
{
    std::vector<int>::iterator it = std::find(vecOfNums.begin(), vecOfNums.end(), d);
    if (it != vecOfNums.end())
    {
        return true;
    }
    return false;
    
}
bool nevpos( vector <int> a)
{
    int nev =0 , pos = 0;
    for (int i = 0; i < a.size(); i++)
    {
        if ( a[i] >= 0 )
        pos++;
        if( a[i] <= 0)
        {
            nev++;
            a[i] *=-1;
        }

    }
    
    if(pos != a.size())
    return true;

    return false;
    
}
bool chk_distinct( vector <int> a)
{
    int cnt = 0 ;
    sort ( a.begin() , a.end());
    for (int i = 0; i < a.size()-1; i++)
    {
        if (a[i]==a[i+1])
        cnt++;
    }
    if(cnt==0)
    {
        return true;
    }
     return false;
    
}
int main()
{
    
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int t=1;
    cin>>t;
    while (t--)
    {
        int n=0;
        cin >> n;
        vector <int> a;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;

            a.push_back(x);
        }
       
        int k=0 ;int j =0;
        
        if( chk_distinct(a)== false)
        {
            cout << "NO\n";
            continue;
        }
        
        if(nevpos(a))
        {
            cout << "NO\n";
            continue;
        }
        int i ;int  m;int d;int f1=0;int d1=0 ; int d2=0;
        for ( i = j; i < a.size()-1; i++)
        {
            for ( m = i; m < a.size()-1; m++)
            {
                d = f_sub(a[i] , a[m+1]);
                if(check(a, d))
                {
                    continue;
                }
                else
                {
                    k++;
                    a.push_back(d);
                    
                }
                if ( k > 300)
                {
                    f1 = 1 ;
                    d1= m;
                    break;
                }
            }
            j++;
            if ( k > 300)
            {
                f1 = 1 ;
                d2 =i;
                break;
            }
            
        }
        if ( k > 300  || i!=a.size()-1){
        cout << "NO\n";
        continue;
        }
        if ( f1==0 && i==a.size()-1)
        {
            cout << "YES\n";
            cout << a.size() << "\n";
            for (int i = 0; i < a.size(); i++)
            {
                cout << a[i] << " ";
            }
            cout << "\n";
            
        }
        else
        {
            cout << "NO\n";
            continue;
        }
        
        


            
        
        
    }
    return 0;
}
