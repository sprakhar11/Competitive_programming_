#include <bits/stdc++.h>
#define lli long long int
#define mod 1000000007
using namespace std;
void vectorinput( vector<int> &v , int n )
{
    for (int i = 0; i < n; i++)
        {
            int x ;
            cin >> x;
            v.push_back(x);
            
        }
    
}
bool checkk( deque<int> d)
{
    int arr[3]={0};
    if( d.size() <= 2 ){
        return false;
    }
    while(!d.empty())
    {
        arr[d.front() - 1]++;
        d.pop_front();
    }
    if ( arr[0] ==0 || arr[1] ==0 || arr[2] ==0)
    return false;

    return true;
}
bool make_deque( deque<int> &d ; int i , int j)
{
    if( d.size() <= 2 ){
        return false;
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    lli t = 1;
    string str;
    cin >> str;
    int l = str.size();
    deque<int> de;
    for (int i = 0; i < l; i++)
    {
        //cout << str[i] - '1' + 1 ;
        de.push_back(str[i] - '1' + 1);

    }
    int m= INT_MAX;
    int f = 1 ;
    if(checkk(de))
    {
        m = de.size();
        f=0;
    }
    deque<int> q;
    q = de ;
    while (!de.empty())
    {
       // int  p = de.front();
        de.pop_front();
        if(checkk(de))
        {
            if ( de.size()<= m)
            m = de.size();
            cout << m;
            f=0;
        }
        /* de.push_front(p);
        de.pop_back();
        if(checkk(de))
        {
            if ( de.size()<= m)
            m = de.size();
            f=0;
        } */


    }
    while (!q.empty())
    {
        //int  p = q.front();
        q.pop_back();
        if(checkk(q))
        {
            if ( q.size()<= m)
            m = q.size();
            f=0;
        }
        /* de.push_front(p);
        de.pop_back();
        if(checkk(de))
        {
            if ( de.size()<= m)
            m = de.size();
            f=0;
        } */
        

    }
    if ( f==0 )
    cout << m ;
    else
    cout << -1;
    
    return 0;
    
}
