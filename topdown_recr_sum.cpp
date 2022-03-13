#include <bits/stdc++.h>
#define lli long long int
#define MOD 1000000007
using namespace std;
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
bool t[n+1][11 + 1];

bool solve(int arr[] , int sum , int n)
{
    if(sum == 11)
    {
        return true;
    }
   if(n == 0 )
   {
        return false;
   }
    else
    {
        if (  solve(arr , sum + arr[n-1] , n-1))
        {
            return true ; 
        }
        if (  solve(arr , sum  , n-1))
        {
            return true ; 
        }
    }
    return false;
    
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("error.txt", "w", stderr);
    #endif
    memset ( t , 0 , sizeof(t));
    int arr[] = {0, 0 ,7 ,8 ,1};
    int n = 5;
    int sum = 0;
    for (int i = 0; i < n+1; i++)
    {
        for (int j = 0; j < 12; j++)
        {
            if(i==0)
            {
                t[0][j]=false;
            }
            if( j== 11)
            {
                t[i][11] = true;
            }
        }
        
    }
    for (int i = 1; i < n+1; i++)
    {
        for (int j = 0; j < 11; j++)
        {
            if(t[i][j]==true)
            {
                cout << "yes";
                break;
            }
            if( )
            t[i][j] = arr[n-1] + t[i-1][j + arr[n-1]]
        }
        
    }
    
    lli t = 1 ;
    //cin >> t ;
    
    for (int i = 0; i < t; i++)
    {
        cout << solve(arr, sum , n) ;
    }
    
    return 0;
    
}
