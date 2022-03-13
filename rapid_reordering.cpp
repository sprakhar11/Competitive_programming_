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
    int n ;
    cin >> n ;
    int nn = n;
    n = n * 2 ;
    vector<int> v;
    
    vectorinput(v, n);

    if ( nn == 1  ){       
        if(v[0]==v[1])
        cout << v[0] << "\n" ;
        else
        cout << -1 << "\n" ;
        return ;
    }
    

    //cout << v[0] << " " << v[1] ;
    vector<int> arr(1000001 , 0) ; 
    for (int i = 0; i < n; i++)
    {
        arr[v[i]]++;
    }
    
    
    int f1 = 0 , f2 = 0 , f3 = 0 , flag = 0 ;
    vector<int> vp;
    for (int i = 0; i < 1000001; i++)
    {
        
        if ( arr[i] == 2)
        {
           // cout << "i" << i << endl;
            vp.push_back(i);
        }
        if ( arr[i] == 3){
            f2 = i;
        }
        if ( arr[i] == 1)
        {
            f1 = i ;
        }
        

    }
    if ( vp.size() != (n / 2) - 2 )
    {
        flag = 1 ; 
    }
    //cout << f1 << " " << f2 ;
    // cout << " hi " ;

    if (flag == 0){

        int  p ;
        n = n / 2 ;
        p = n / 2 ;
        if ( n % 2 == 0 )
        p--;
        for (int i = 0; i < p; i++)
        {
            cout << vp[i] << " " ;
        }
        cout << f2 << " " ;
        for (int i = p; i < (int)vp.size(); i++)
        {
            cout << vp[i] << " " ;
        }
        cout << f1 ;
        cout << "\n";
            
        
    }
    else
    {
        cout << -1 << "\n";
    }
    
    
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
