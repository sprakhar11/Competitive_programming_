#include <bits/stdc++.h>
#define lli long long int
#define MOD 1000000007
using namespace std;
//prakhar_0007
lli mult(lli x, lli y) 
{
    lli res = x * y;
    return (res >= MOD ? res % MOD : res);
}
lli factorial(lli v)
{
    lli ans=1;
    for(int i=2;i<=v;i++)
    {
        ans*=i;
        ans%=MOD;
    }
    return ans;
}
lli power(lli x, lli y)
{   if (y < 0)
    return 1;
    lli res = 1; 
    x %= MOD;
    while (y!=0) 
    {
        if ((y & 1)==1)
        res = mult(res, x); 
        y >>= 1;
        x = mult(x, x);
    } 
    return res;
}
void vectorinput( vector<int> &v , int n )
{
    for (int i = 0; i < n; i++)
        {
            int x ;
            cin >> x;
            v.push_back(x);
            
        }
    
}
void printvec(vector<int> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " " ;
    }
    cout << endl;
}
void solve()
{
    lli n ; 
    cin >> n ;
    string s ;
    cin >> s ;
    vector<int> v ;

    for (lli i = 0; i < n; i++)
    {
        if( s[i] == 'R')
        v.push_back(1);
        if( s[i] == 'P')
        v.push_back(2);
        if( s[i] == 'S')
        v.push_back(3);
        
    }
    // if((s[j] == 'P' && s[j-1]== 'R') || (s[j] == 'R' && s[j-1]== 'P')  )
        // {
        //     win = 'P';
        // }
        // if((s[j] == 'S' && s[j-1]== 'R') || (s[j] == 'R' && s[j-1]== 'S')  )
        // {
        //     win = 'R';
        // }
        // if((s[j] == 'P' && s[j-1]== 'S') || (s[j] == 'S' && s[j-1]== 'P')  )
        // {
        //     win = 'S';
        // }
    //printvec(v);
    // for (int i = 0; i < n; i++)
    // {
    //     cout << s[i] << " ";
    // }
    // cout << endl;
    int ans = v[0];
    for (int i = 0; i < n; i++)
    {
        ans = v[i];
        for (int j = i+1 ; j < n ; j++)
        {
            if((ans == 1 && v[j] == 3) || ( v[j]==1 && ans == 3))
            ans = 1 ;
            if(ans == 2 && v[j] == 1 || ( v[j]==2 && ans == 1))
            ans = 2;
            if(ans == 3 && v[j] == 2 || ( v[j]==3 && ans == 2))
            ans = 3 ;

        }
        if(ans == 1)
        cout << "R" << "";
        if(ans == 2)
        cout << "P" << "";
        if(ans == 3)
        cout << "S" << "";
        
    }
    cout << endl;
    
    
    
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("error.txt", "w", stderr);
    #endif
    lli t = 1 ;
    cin >> t ;
    for (int i = 0; i < t; i++)
    {
        solve();
    }
    
    return 0;
    
}
